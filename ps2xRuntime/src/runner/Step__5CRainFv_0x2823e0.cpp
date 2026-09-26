#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__5CRainFv
// Address: 0x2823e0 - 0x2826e8
void Step__5CRainFv_0x2823e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__5CRainFv_0x2823e0");
#endif

    switch (ctx->pc) {
        case 0x282418u: goto label_282418;
        case 0x282428u: goto label_282428;
        case 0x28243cu: goto label_28243c;
        case 0x282458u: goto label_282458;
        case 0x282470u: goto label_282470;
        case 0x282488u: goto label_282488;
        case 0x282498u: goto label_282498;
        case 0x2824b0u: goto label_2824b0;
        case 0x2824c8u: goto label_2824c8;
        case 0x2824d4u: goto label_2824d4;
        case 0x2824e8u: goto label_2824e8;
        case 0x2824f4u: goto label_2824f4;
        case 0x282510u: goto label_282510;
        case 0x282520u: goto label_282520;
        case 0x282540u: goto label_282540;
        case 0x282558u: goto label_282558;
        case 0x282564u: goto label_282564;
        case 0x282580u: goto label_282580;
        case 0x282594u: goto label_282594;
        case 0x2825a4u: goto label_2825a4;
        case 0x2825f8u: goto label_2825f8;
        case 0x282610u: goto label_282610;
        case 0x282624u: goto label_282624;
        case 0x282664u: goto label_282664;
        case 0x282680u: goto label_282680;
        case 0x282690u: goto label_282690;
        case 0x2826a0u: goto label_2826a0;
        case 0x2826b0u: goto label_2826b0;
        default: break;
    }

    ctx->pc = 0x2823e0u;

    // 0x2823e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2823e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2823e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2823e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2823e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2823e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2823ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2823ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2823f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2823f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2823f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2823f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2823f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2823f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2823fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2823fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x282400: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x282400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x282404: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282408: 0x106000ad  beqz        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x282408u;
    {
        const bool branch_taken_0x282408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282408u;
            // 0x28240c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282408) {
            ctx->pc = 0x2826C0u;
            goto label_2826c0;
        }
    }
    ctx->pc = 0x282410u;
    // 0x282410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282414: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282418:
    // 0x282418: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x282418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x28241c: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x28241cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x282420: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x282420u;
    SET_GPR_U32(ctx, 31, 0x282428u);
    ctx->pc = 0x282424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282420u;
            // 0x282424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (runtime->hasFunction(0x281E90u)) {
        auto targetFn = runtime->lookupFunction(0x281E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282428u; }
        if (ctx->pc != 0x282428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CRainDropFv_0x281e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282428u; }
        if (ctx->pc != 0x282428u) { return; }
    }
    ctx->pc = 0x282428u;
label_282428:
    // 0x282428: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28242c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28242Cu;
    {
        const bool branch_taken_0x28242c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x282430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28242Cu;
            // 0x282430: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28242c) {
            ctx->pc = 0x28244Cu;
            goto label_28244c;
        }
    }
    ctx->pc = 0x282434u;
    // 0x282434: 0xc041c5c  jal         func_107170
    ctx->pc = 0x282434u;
    SET_GPR_U32(ctx, 31, 0x28243Cu);
    ctx->pc = 0x282438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282434u;
            // 0x282438: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28243Cu; }
        if (ctx->pc != 0x28243Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28243Cu; }
        if (ctx->pc != 0x28243Cu) { return; }
    }
    ctx->pc = 0x28243Cu;
label_28243c:
    // 0x28243c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282440: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x282440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x282444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x282444u;
    {
        const bool branch_taken_0x282444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282444u;
            // 0x282448: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282444) {
            ctx->pc = 0x282470u;
            goto label_282470;
        }
    }
    ctx->pc = 0x28244Cu;
label_28244c:
    // 0x28244c: 0x0  nop
    ctx->pc = 0x28244cu;
    // NOP
    // 0x282450: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x282450u;
    SET_GPR_U32(ctx, 31, 0x282458u);
    ctx->pc = 0x282454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282450u;
            // 0x282454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (runtime->hasFunction(0x281E90u)) {
        auto targetFn = runtime->lookupFunction(0x281E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282458u; }
        if (ctx->pc != 0x282458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CRainDropFv_0x281e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282458u; }
        if (ctx->pc != 0x282458u) { return; }
    }
    ctx->pc = 0x282458u;
label_282458:
    // 0x282458: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x282458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x28245c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28245Cu;
    {
        const bool branch_taken_0x28245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x282460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28245Cu;
            // 0x282460: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28245c) {
            ctx->pc = 0x282470u;
            goto label_282470;
        }
    }
    ctx->pc = 0x282464u;
    // 0x282464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282468: 0xc0a0748  jal         func_281D20
    ctx->pc = 0x282468u;
    SET_GPR_U32(ctx, 31, 0x282470u);
    ctx->pc = 0x28246Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282468u;
            // 0x28246c: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D20u;
    if (runtime->hasFunction(0x281D20u)) {
        auto targetFn = runtime->lookupFunction(0x281D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282470u; }
        if (ctx->pc != 0x282470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__9CRainDropFi_0x281d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282470u; }
        if (ctx->pc != 0x282470u) { return; }
    }
    ctx->pc = 0x282470u;
label_282470:
    // 0x282470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x282470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x282474: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x282474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282478: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x282478u;
    {
        const bool branch_taken_0x282478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282478u;
            // 0x28247c: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282478) {
            ctx->pc = 0x282418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282418;
        }
    }
    ctx->pc = 0x282480u;
    // 0x282480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282484: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282488:
    // 0x282488: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x282488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x28248c: 0x267444d0  addiu       $s4, $s3, 0x44D0
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 17616));
    // 0x282490: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x282490u;
    SET_GPR_U32(ctx, 31, 0x282498u);
    ctx->pc = 0x282494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282490u;
            // 0x282494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (runtime->hasFunction(0x281E90u)) {
        auto targetFn = runtime->lookupFunction(0x281E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282498u; }
        if (ctx->pc != 0x282498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CRainDropFv_0x281e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282498u; }
        if (ctx->pc != 0x282498u) { return; }
    }
    ctx->pc = 0x282498u;
label_282498:
    // 0x282498: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28249c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28249Cu;
    {
        const bool branch_taken_0x28249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2824A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28249Cu;
            // 0x2824a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28249c) {
            ctx->pc = 0x2824B0u;
            goto label_2824b0;
        }
    }
    ctx->pc = 0x2824A4u;
    // 0x2824a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2824a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2824a8: 0xc0a0748  jal         func_281D20
    ctx->pc = 0x2824A8u;
    SET_GPR_U32(ctx, 31, 0x2824B0u);
    ctx->pc = 0x2824ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2824A8u;
            // 0x2824ac: 0xae6044d0  sw          $zero, 0x44D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 17616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D20u;
    if (runtime->hasFunction(0x281D20u)) {
        auto targetFn = runtime->lookupFunction(0x281D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824B0u; }
        if (ctx->pc != 0x2824B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__9CRainDropFi_0x281d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824B0u; }
        if (ctx->pc != 0x2824B0u) { return; }
    }
    ctx->pc = 0x2824B0u;
label_2824b0:
    // 0x2824b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2824b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2824b4: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x2824b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2824b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2824B8u;
    {
        const bool branch_taken_0x2824b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2824BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2824B8u;
            // 0x2824bc: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824b8) {
            ctx->pc = 0x282488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282488;
        }
    }
    ctx->pc = 0x2824C0u;
    // 0x2824c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2824c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2824c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2824c8:
    // 0x2824c8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2824c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2824cc: 0xc0a0698  jal         func_281A60
    ctx->pc = 0x2824CCu;
    SET_GPR_U32(ctx, 31, 0x2824D4u);
    ctx->pc = 0x2824D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2824CCu;
            // 0x2824d0: 0x24446730  addiu       $a0, $v0, 0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281A60u;
    if (runtime->hasFunction(0x281A60u)) {
        auto targetFn = runtime->lookupFunction(0x281A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824D4u; }
        if (ctx->pc != 0x2824D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CParticleFv_0x281a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824D4u; }
        if (ctx->pc != 0x2824D4u) { return; }
    }
    ctx->pc = 0x2824D4u;
label_2824d4:
    // 0x2824d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2824d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2824d8: 0x14430047  bne         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2824D8u;
    {
        const bool branch_taken_0x2824d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2824d8) {
            ctx->pc = 0x2825F8u;
            goto label_2825f8;
        }
    }
    ctx->pc = 0x2824E0u;
    // 0x2824e0: 0xc06421c  jal         func_190870
    ctx->pc = 0x2824E0u;
    SET_GPR_U32(ctx, 31, 0x2824E8u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824E8u; }
        if (ctx->pc != 0x2824E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824E8u; }
        if (ctx->pc != 0x2824E8u) { return; }
    }
    ctx->pc = 0x2824E8u;
label_2824e8:
    // 0x2824e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2824e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2824ec: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2824ECu;
    SET_GPR_U32(ctx, 31, 0x2824F4u);
    ctx->pc = 0x2824F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2824ECu;
            // 0x2824f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824F4u; }
        if (ctx->pc != 0x2824F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824F4u; }
        if (ctx->pc != 0x2824F4u) { return; }
    }
    ctx->pc = 0x2824F4u;
label_2824f4:
    // 0x2824f4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2824F4u;
    {
        const bool branch_taken_0x2824f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2824f4) {
            ctx->pc = 0x282608u;
            goto label_282608;
        }
    }
    ctx->pc = 0x2824FCu;
    // 0x2824fc: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2824fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x282500: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x282500u;
    {
        const bool branch_taken_0x282500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282500u;
            // 0x282504: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282500) {
            ctx->pc = 0x282608u;
            goto label_282608;
        }
    }
    ctx->pc = 0x282508u;
    // 0x282508: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x282508u;
    SET_GPR_U32(ctx, 31, 0x282510u);
    ctx->pc = 0x28250Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282508u;
            // 0x28250c: 0x24a5d168  addiu       $a1, $a1, -0x2E98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282510u; }
        if (ctx->pc != 0x282510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282510u; }
        if (ctx->pc != 0x282510u) { return; }
    }
    ctx->pc = 0x282510u;
label_282510:
    // 0x282510: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x282510u;
    {
        const bool branch_taken_0x282510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282510u;
            // 0x282514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282510) {
            ctx->pc = 0x282608u;
            goto label_282608;
        }
    }
    ctx->pc = 0x282518u;
    // 0x282518: 0xc04de0c  jal         func_137830
    ctx->pc = 0x282518u;
    SET_GPR_U32(ctx, 31, 0x282520u);
    ctx->pc = 0x28251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282518u;
            // 0x28251c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282520u; }
        if (ctx->pc != 0x282520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282520u; }
        if (ctx->pc != 0x282520u) { return; }
    }
    ctx->pc = 0x282520u;
label_282520:
    // 0x282520: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x282524: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x282524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x282528: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x282528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28252c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x28252cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x282530: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x282530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282534: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282538: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x282538u;
    SET_GPR_U32(ctx, 31, 0x282540u);
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282540u; }
        if (ctx->pc != 0x282540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282540u; }
        if (ctx->pc != 0x282540u) { return; }
    }
    ctx->pc = 0x282540u;
label_282540:
    // 0x282540: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x282540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x282544: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x282544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x282548: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28254c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28254cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282550: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x282550u;
    SET_GPR_U32(ctx, 31, 0x282558u);
    ctx->pc = 0x282554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282550u;
            // 0x282554: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282558u; }
        if (ctx->pc != 0x282558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282558u; }
        if (ctx->pc != 0x282558u) { return; }
    }
    ctx->pc = 0x282558u;
label_282558:
    // 0x282558: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x282558u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x28255c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x28255Cu;
    SET_GPR_U32(ctx, 31, 0x282564u);
    ctx->pc = 0x282560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28255Cu;
            // 0x282560: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282564u; }
        if (ctx->pc != 0x282564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282564u; }
        if (ctx->pc != 0x282564u) { return; }
    }
    ctx->pc = 0x282564u;
label_282564:
    // 0x282564: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x282564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x282568: 0x27b30094  addiu       $s3, $sp, 0x94
    ctx->pc = 0x282568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x28256c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28256cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282570: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x282570u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x282574: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x282574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282578: 0xc047964  jal         func_11E590
    ctx->pc = 0x282578u;
    SET_GPR_U32(ctx, 31, 0x282580u);
    ctx->pc = 0x28257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282578u;
            // 0x28257c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282580u; }
        if (ctx->pc != 0x282580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282580u; }
        if (ctx->pc != 0x282580u) { return; }
    }
    ctx->pc = 0x282580u;
label_282580:
    // 0x282580: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x282584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282588: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x282588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28258c: 0xc047964  jal         func_11E590
    ctx->pc = 0x28258Cu;
    SET_GPR_U32(ctx, 31, 0x282594u);
    ctx->pc = 0x282590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28258Cu;
            // 0x282590: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282594u; }
        if (ctx->pc != 0x282594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282594u; }
        if (ctx->pc != 0x282594u) { return; }
    }
    ctx->pc = 0x282594u;
label_282594:
    // 0x282594: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x282594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x282598: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x282598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28259c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x28259Cu;
    SET_GPR_U32(ctx, 31, 0x2825A4u);
    ctx->pc = 0x2825A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28259Cu;
            // 0x2825a0: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825A4u; }
        if (ctx->pc != 0x2825A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825A4u; }
        if (ctx->pc != 0x2825A4u) { return; }
    }
    ctx->pc = 0x2825A4u;
label_2825a4:
    // 0x2825a4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2825a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2825a8: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x2825a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2825ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2825acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2825b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2825b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2825b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2825b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2825bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2825bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2825c0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x2825c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2825c4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2825c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825c8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2825c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825cc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2825ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2825d0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2825d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2825d4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2825d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2825d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2825dc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2825dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2825e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2825e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2825e4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2825e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2825e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2825e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2825ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2825ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2825f0: 0xc0a087c  jal         func_2821F0
    ctx->pc = 0x2825F0u;
    SET_GPR_U32(ctx, 31, 0x2825F8u);
    ctx->pc = 0x2825F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2825F0u;
            // 0x2825f4: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2821F0u;
    if (runtime->hasFunction(0x2821F0u)) {
        auto targetFn = runtime->lookupFunction(0x2821F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825F8u; }
        if (ctx->pc != 0x2825F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleBirth__5CRainFPfi_0x2821f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825F8u; }
        if (ctx->pc != 0x2825F8u) { return; }
    }
    ctx->pc = 0x2825F8u;
label_2825f8:
    // 0x2825f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2825f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2825fc: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x2825fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282600: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x282600u;
    {
        const bool branch_taken_0x282600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282600u;
            // 0x282604: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282600) {
            ctx->pc = 0x2824C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2824c8;
        }
    }
    ctx->pc = 0x282608u;
label_282608:
    // 0x282608: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x282608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28260c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28260cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282610:
    // 0x282610: 0x211a021  addu        $s4, $s0, $s1
    ctx->pc = 0x282610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x282614: 0x34018670  ori         $at, $zero, 0x8670
    ctx->pc = 0x282614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34416);
    // 0x282618: 0x2819021  addu        $s2, $s4, $at
    ctx->pc = 0x282618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x28261c: 0xc0a0564  jal         func_281590
    ctx->pc = 0x28261Cu;
    SET_GPR_U32(ctx, 31, 0x282624u);
    ctx->pc = 0x282620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28261Cu;
            // 0x282620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281590u;
    if (runtime->hasFunction(0x281590u)) {
        auto targetFn = runtime->lookupFunction(0x281590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282624u; }
        if (ctx->pc != 0x282624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CRippleFv_0x281590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282624u; }
        if (ctx->pc != 0x282624u) { return; }
    }
    ctx->pc = 0x282624u;
label_282624:
    // 0x282624: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282628: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x282628u;
    {
        const bool branch_taken_0x282628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x282628) {
            ctx->pc = 0x2826B0u;
            goto label_2826b0;
        }
    }
    ctx->pc = 0x282630u;
    // 0x282630: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x282630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x282634: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x282634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x282638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x282638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28263c: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x28263cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x282640: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x282644: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x282644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x282648: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x282648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x28264c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x28264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282650: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x282650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x282654: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x282654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x282658: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x282658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28265c: 0xc0a04e8  jal         func_2813A0
    ctx->pc = 0x28265Cu;
    SET_GPR_U32(ctx, 31, 0x282664u);
    ctx->pc = 0x282660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28265Cu;
            // 0x282660: 0xac208670  sw          $zero, -0x7990($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294936176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2813A0u;
    if (runtime->hasFunction(0x2813A0u)) {
        auto targetFn = runtime->lookupFunction(0x2813A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282664u; }
        if (ctx->pc != 0x282664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RandXYinViewArea__FfffPfPf_0x2813a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282664u; }
        if (ctx->pc != 0x282664u) { return; }
    }
    ctx->pc = 0x282664u;
label_282664:
    // 0x282664: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x282668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28266c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x28266cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x282670: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x282670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x282674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282678: 0xc0a0544  jal         func_281510
    ctx->pc = 0x282678u;
    SET_GPR_U32(ctx, 31, 0x282680u);
    ctx->pc = 0x28267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282678u;
            // 0x28267c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281510u;
    if (runtime->hasFunction(0x281510u)) {
        auto targetFn = runtime->lookupFunction(0x281510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282680u; }
        if (ctx->pc != 0x282680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__7CRippleFPf_0x281510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282680u; }
        if (ctx->pc != 0x282680u) { return; }
    }
    ctx->pc = 0x282680u;
label_282680:
    // 0x282680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282684: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x282684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x282688: 0xc0a087c  jal         func_2821F0
    ctx->pc = 0x282688u;
    SET_GPR_U32(ctx, 31, 0x282690u);
    ctx->pc = 0x28268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282688u;
            // 0x28268c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2821F0u;
    if (runtime->hasFunction(0x2821F0u)) {
        auto targetFn = runtime->lookupFunction(0x2821F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282690u; }
        if (ctx->pc != 0x282690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleBirth__5CRainFPfi_0x2821f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282690u; }
        if (ctx->pc != 0x282690u) { return; }
    }
    ctx->pc = 0x282690u;
label_282690:
    // 0x282690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282694: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x282698: 0xc0a087c  jal         func_2821F0
    ctx->pc = 0x282698u;
    SET_GPR_U32(ctx, 31, 0x2826A0u);
    ctx->pc = 0x28269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282698u;
            // 0x28269c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2821F0u;
    if (runtime->hasFunction(0x2821F0u)) {
        auto targetFn = runtime->lookupFunction(0x2821F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826A0u; }
        if (ctx->pc != 0x2826A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleBirth__5CRainFPfi_0x2821f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826A0u; }
        if (ctx->pc != 0x2826A0u) { return; }
    }
    ctx->pc = 0x2826A0u;
label_2826a0:
    // 0x2826a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2826a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2826a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2826a8: 0xc0a087c  jal         func_2821F0
    ctx->pc = 0x2826A8u;
    SET_GPR_U32(ctx, 31, 0x2826B0u);
    ctx->pc = 0x2826ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2826A8u;
            // 0x2826ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2821F0u;
    if (runtime->hasFunction(0x2821F0u)) {
        auto targetFn = runtime->lookupFunction(0x2821F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826B0u; }
        if (ctx->pc != 0x2826B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleBirth__5CRainFPfi_0x2821f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826B0u; }
        if (ctx->pc != 0x2826B0u) { return; }
    }
    ctx->pc = 0x2826B0u;
label_2826b0:
    // 0x2826b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2826b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2826b4: 0x2a6300c8  slti        $v1, $s3, 0xC8
    ctx->pc = 0x2826b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2826b8: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2826B8u;
    {
        const bool branch_taken_0x2826b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2826BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2826B8u;
            // 0x2826bc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826b8) {
            ctx->pc = 0x282610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282610;
        }
    }
    ctx->pc = 0x2826C0u;
label_2826c0:
    // 0x2826c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2826c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2826c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2826c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2826c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2826c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2826cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2826ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2826d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2826d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2826d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2826d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2826d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2826d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2826dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2826dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2826e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2826E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2826E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2826E0u;
            // 0x2826e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2826E8u;
}
