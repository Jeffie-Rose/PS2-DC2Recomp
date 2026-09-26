#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_EXT_PARAM_RATE__FP12RS_STACKDATAi
// Address: 0x1e20f0 - 0x1e2214
void ps2__SET_EXT_PARAM_RATE__FP12RS_STACKDATAi_0x1e20f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_EXT_PARAM_RATE__FP12RS_STACKDATAi_0x1e20f0");
#endif

    switch (ctx->pc) {
        case 0x1e2124u: goto label_1e2124;
        case 0x1e2134u: goto label_1e2134;
        case 0x1e2140u: goto label_1e2140;
        case 0x1e2180u: goto label_1e2180;
        case 0x1e21b4u: goto label_1e21b4;
        default: break;
    }

    ctx->pc = 0x1e20f0u;

    // 0x1e20f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e20f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e20f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e20f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e20fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e2100: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e2100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e2104: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e2104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e2108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e210c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E210Cu;
    {
        const bool branch_taken_0x1e210c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E210Cu;
            // 0x1e2110: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e210c) {
            ctx->pc = 0x1E211Cu;
            goto label_1e211c;
        }
    }
    ctx->pc = 0x1E2114u;
    // 0x1e2114: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E2114u;
    {
        const bool branch_taken_0x1e2114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2114u;
            // 0x1e2118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2114) {
            ctx->pc = 0x1E21F4u;
            goto label_1e21f4;
        }
    }
    ctx->pc = 0x1E211Cu;
label_1e211c:
    // 0x1e211c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E211Cu;
    SET_GPR_U32(ctx, 31, 0x1E2124u);
    ctx->pc = 0x1E2120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E211Cu;
            // 0x1e2120: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2124u; }
        if (ctx->pc != 0x1E2124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2124u; }
        if (ctx->pc != 0x1E2124u) { return; }
    }
    ctx->pc = 0x1E2124u;
label_1e2124:
    // 0x1e2124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e2128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e212c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E212Cu;
    SET_GPR_U32(ctx, 31, 0x1E2134u);
    ctx->pc = 0x1E2130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E212Cu;
            // 0x1e2130: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2134u; }
        if (ctx->pc != 0x1E2134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2134u; }
        if (ctx->pc != 0x1E2134u) { return; }
    }
    ctx->pc = 0x1E2134u;
label_1e2134:
    // 0x1e2134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2138: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2138u;
    SET_GPR_U32(ctx, 31, 0x1E2140u);
    ctx->pc = 0x1E213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2138u;
            // 0x1e213c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2140u; }
        if (ctx->pc != 0x1E2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2140u; }
        if (ctx->pc != 0x1E2140u) { return; }
    }
    ctx->pc = 0x1E2140u;
label_1e2140:
    // 0x1e2140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2144: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2144u;
    {
        const bool branch_taken_0x1e2144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2144u;
            // 0x1e2148: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2144) {
            ctx->pc = 0x1E2170u;
            goto label_1e2170;
        }
    }
    ctx->pc = 0x1E214Cu;
    // 0x1e214c: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e2150: 0x2622ffe8  addiu       $v0, $s1, -0x18
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
    // 0x1e2154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e215c: 0x8c520484  lw          $s2, 0x484($v0)
    ctx->pc = 0x1e215cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e2160: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2160u;
    {
        const bool branch_taken_0x1e2160 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2160u;
            // 0x1e2164: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2160) {
            ctx->pc = 0x1E217Cu;
            goto label_1e217c;
        }
    }
    ctx->pc = 0x1E2168u;
    // 0x1e2168: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2168u;
            // 0x1e216c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E21F4u;
            goto label_1e21f4;
        }
    }
    ctx->pc = 0x1E2170u;
label_1e2170:
    // 0x1e2170: 0x8f928e70  lw          $s2, -0x7190($gp)
    ctx->pc = 0x1e2170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2174: 0x0  nop
    ctx->pc = 0x1e2174u;
    // NOP
    // 0x1e2178: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e2178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e217c:
    // 0x1e217c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e217cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2180:
    // 0x1e2180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2184: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x1e2184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1e2188: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1e2188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1e218c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E218Cu;
    {
        const bool branch_taken_0x1e218c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e218c) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2194u;
    // 0x1e2194: 0x8e42114c  lw          $v0, 0x114C($s2)
    ctx->pc = 0x1e2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4428)));
    // 0x1e2198: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e2198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e219c: 0x8442007c  lh          $v0, 0x7C($v0)
    ctx->pc = 0x1e219cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1e21a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e21a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e21a4: 0x0  nop
    ctx->pc = 0x1e21a4u;
    // NOP
    // 0x1e21a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e21a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e21ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E21ACu;
    SET_GPR_U32(ctx, 31, 0x1E21B4u);
    ctx->pc = 0x1E21B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21ACu;
            // 0x1e21b0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21B4u; }
        if (ctx->pc != 0x1E21B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21B4u; }
        if (ctx->pc != 0x1E21B4u) { return; }
    }
    ctx->pc = 0x1E21B4u;
label_1e21b4:
    // 0x1e21b4: 0x8e431150  lw          $v1, 0x1150($s2)
    ctx->pc = 0x1e21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4432)));
    // 0x1e21b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e21bc: 0xa462007c  sh          $v0, 0x7C($v1)
    ctx->pc = 0x1e21bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e21c0: 0x8e421150  lw          $v0, 0x1150($s2)
    ctx->pc = 0x1e21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4432)));
    // 0x1e21c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e21c8: 0x2443007c  addiu       $v1, $v0, 0x7C
    ctx->pc = 0x1e21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x1e21cc: 0x8442007c  lh          $v0, 0x7C($v0)
    ctx->pc = 0x1e21ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1e21d0: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1e21d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1e21d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E21D4u;
    {
        const bool branch_taken_0x1e21d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E21D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21D4u;
            // 0x1e21d8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21d4) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21DCu;
    // 0x1e21dc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1e21dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e21e0:
    // 0x1e21e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e21e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e21e4: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x1e21e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1e21e8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E21E8u;
    {
        const bool branch_taken_0x1e21e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E21ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21E8u;
            // 0x1e21ec: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21e8) {
            ctx->pc = 0x1E2180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e2180;
        }
    }
    ctx->pc = 0x1E21F0u;
    // 0x1e21f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e21f4:
    // 0x1e21f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e21f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e21f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e21fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e21fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2200: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2204: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2208: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e220c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E220Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E220Cu;
            // 0x1e2210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2214u;
}
