#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CREATE_MONSTER__FP12RS_STACKDATAi
// Address: 0x1e6320 - 0x1e6450
void ps2__CREATE_MONSTER__FP12RS_STACKDATAi_0x1e6320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CREATE_MONSTER__FP12RS_STACKDATAi_0x1e6320");
#endif

    switch (ctx->pc) {
        case 0x1e6340u: goto label_1e6340;
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6364u: goto label_1e6364;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6390u: goto label_1e6390;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6438u: goto label_1e6438;
        default: break;
    }

    ctx->pc = 0x1e6320u;

    // 0x1e6320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e6324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e632c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6338: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1E6338u;
    SET_GPR_U32(ctx, 31, 0x1E6340u);
    ctx->pc = 0x1E633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6338u;
            // 0x1e633c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6340u; }
        if (ctx->pc != 0x1E6340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6340u; }
        if (ctx->pc != 0x1E6340u) { return; }
    }
    ctx->pc = 0x1E6340u;
label_1e6340:
    // 0x1e6340: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6344: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6348: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1E6348u;
    SET_GPR_U32(ctx, 31, 0x1E6350u);
    ctx->pc = 0x1E634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6348u;
            // 0x1e634c: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6350u; }
        if (ctx->pc != 0x1E6350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6350u; }
        if (ctx->pc != 0x1E6350u) { return; }
    }
    ctx->pc = 0x1E6350u;
label_1e6350:
    // 0x1e6350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6358: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e6358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e635c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E635Cu;
    SET_GPR_U32(ctx, 31, 0x1E6364u);
    ctx->pc = 0x1E6360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E635Cu;
            // 0x1e6360: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6364u; }
        if (ctx->pc != 0x1E6364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6364u; }
        if (ctx->pc != 0x1E6364u) { return; }
    }
    ctx->pc = 0x1E6364u;
label_1e6364:
    // 0x1e6364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6368: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e6368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e636c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E636Cu;
    {
        const bool branch_taken_0x1e636c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E636Cu;
            // 0x1e6370: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e636c) {
            ctx->pc = 0x1E63A8u;
            goto label_1e63a8;
        }
    }
    ctx->pc = 0x1E6374u;
    // 0x1e6374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6378: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6378u;
    SET_GPR_U32(ctx, 31, 0x1E6380u);
    ctx->pc = 0x1E637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6378u;
            // 0x1e637c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6380u; }
        if (ctx->pc != 0x1E6380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6380u; }
        if (ctx->pc != 0x1E6380u) { return; }
    }
    ctx->pc = 0x1E6380u;
label_1e6380:
    // 0x1e6380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6384: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e6384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e6388: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6388u;
    SET_GPR_U32(ctx, 31, 0x1E6390u);
    ctx->pc = 0x1E638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6388u;
            // 0x1e638c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6390u; }
        if (ctx->pc != 0x1E6390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6390u; }
        if (ctx->pc != 0x1E6390u) { return; }
    }
    ctx->pc = 0x1E6390u;
label_1e6390:
    // 0x1e6390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6394: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e6394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e6398: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6398u;
    SET_GPR_U32(ctx, 31, 0x1E63A0u);
    ctx->pc = 0x1E639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6398u;
            // 0x1e639c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63A0u; }
        if (ctx->pc != 0x1E63A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63A0u; }
        if (ctx->pc != 0x1E63A0u) { return; }
    }
    ctx->pc = 0x1E63A0u;
label_1e63a0:
    // 0x1e63a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e63a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e63a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e63a8:
    // 0x1e63a8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E63A8u;
    {
        const bool branch_taken_0x1e63a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E63ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63A8u;
            // 0x1e63ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63a8) {
            ctx->pc = 0x1E63C0u;
            goto label_1e63c0;
        }
    }
    ctx->pc = 0x1E63B0u;
    // 0x1e63b0: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E63B0u;
    SET_GPR_U32(ctx, 31, 0x1E63B8u);
    ctx->pc = 0x1E63B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63B0u;
            // 0x1e63b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63B8u; }
        if (ctx->pc != 0x1E63B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63B8u; }
        if (ctx->pc != 0x1E63B8u) { return; }
    }
    ctx->pc = 0x1E63B8u;
label_1e63b8:
    // 0x1e63b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E63B8u;
    {
        const bool branch_taken_0x1e63b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63B8u;
            // 0x1e63bc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63b8) {
            ctx->pc = 0x1E63F0u;
            goto label_1e63f0;
        }
    }
    ctx->pc = 0x1E63C0u;
label_1e63c0:
    // 0x1e63c0: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E63C0u;
    {
        const bool branch_taken_0x1e63c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E63C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63C0u;
            // 0x1e63c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63c0) {
            ctx->pc = 0x1E63F0u;
            goto label_1e63f0;
        }
    }
    ctx->pc = 0x1E63C8u;
    // 0x1e63c8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E63C8u;
    SET_GPR_U32(ctx, 31, 0x1E63D0u);
    ctx->pc = 0x1E63CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63C8u;
            // 0x1e63cc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63D0u; }
        if (ctx->pc != 0x1E63D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63D0u; }
        if (ctx->pc != 0x1E63D0u) { return; }
    }
    ctx->pc = 0x1E63D0u;
label_1e63d0:
    // 0x1e63d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e63d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e63d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e63d8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E63D8u;
    SET_GPR_U32(ctx, 31, 0x1E63E0u);
    ctx->pc = 0x1E63DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63D8u;
            // 0x1e63dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63E0u; }
        if (ctx->pc != 0x1E63E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63E0u; }
        if (ctx->pc != 0x1E63E0u) { return; }
    }
    ctx->pc = 0x1E63E0u;
label_1e63e0:
    // 0x1e63e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63e4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E63E4u;
    SET_GPR_U32(ctx, 31, 0x1E63ECu);
    ctx->pc = 0x1E63E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63E4u;
            // 0x1e63e8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63ECu; }
        if (ctx->pc != 0x1E63ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63ECu; }
        if (ctx->pc != 0x1E63ECu) { return; }
    }
    ctx->pc = 0x1E63ECu;
label_1e63ec:
    // 0x1e63ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1e63ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1e63f0:
    // 0x1e63f0: 0xc076db0  jal         func_1DB6C0
    ctx->pc = 0x1E63F0u;
    SET_GPR_U32(ctx, 31, 0x1E63F8u);
    ctx->pc = 0x1E63F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63F0u;
            // 0x1e63f4: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63F8u; }
        if (ctx->pc != 0x1E63F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63F8u; }
        if (ctx->pc != 0x1E63F8u) { return; }
    }
    ctx->pc = 0x1E63F8u;
label_1e63f8:
    // 0x1e63f8: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x1e63f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e63fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E63FCu;
    {
        const bool branch_taken_0x1e63fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63FCu;
            // 0x1e6400: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63fc) {
            ctx->pc = 0x1E640Cu;
            goto label_1e640c;
        }
    }
    ctx->pc = 0x1E6404u;
    // 0x1e6404: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E6404u;
    {
        const bool branch_taken_0x1e6404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6404u;
            // 0x1e6408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6404) {
            ctx->pc = 0x1E643Cu;
            goto label_1e643c;
        }
    }
    ctx->pc = 0x1E640Cu;
label_1e640c:
    // 0x1e640c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6414: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e6414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6418: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e641c: 0xc076eec  jal         func_1DBBB0
    ctx->pc = 0x1E641Cu;
    SET_GPR_U32(ctx, 31, 0x1E6424u);
    ctx->pc = 0x1E6420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E641Cu;
            // 0x1e6420: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBB0u;
    if (runtime->hasFunction(0x1DBBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6424u; }
        if (ctx->pc != 0x1E6424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveMonster__11CMonsterManFiPfPfi_0x1dbbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6424u; }
        if (ctx->pc != 0x1E6424u) { return; }
    }
    ctx->pc = 0x1E6424u;
label_1e6424:
    // 0x1e6424: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e6424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e6428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e6428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e642c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e642cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6430: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E6430u;
    SET_GPR_U32(ctx, 31, 0x1E6438u);
    ctx->pc = 0x1E6434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6430u;
            // 0x1e6434: 0x24848070  addiu       $a0, $a0, -0x7F90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6438u; }
        if (ctx->pc != 0x1E6438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6438u; }
        if (ctx->pc != 0x1E6438u) { return; }
    }
    ctx->pc = 0x1E6438u;
label_1e6438:
    // 0x1e6438: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x1e6438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e643c:
    // 0x1e643c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e643cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6448: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6448u;
            // 0x1e644c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6450u;
}
