#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_VAN_SET_SCL__FP12RS_STACKDATAi
// Address: 0x2e6380 - 0x2e64bc
void ps2__SPT_VAN_SET_SCL__FP12RS_STACKDATAi_0x2e6380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_VAN_SET_SCL__FP12RS_STACKDATAi_0x2e6380");
#endif

    switch (ctx->pc) {
        case 0x2e63c0u: goto label_2e63c0;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e63e0u: goto label_2e63e0;
        case 0x2e63f0u: goto label_2e63f0;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6410u: goto label_2e6410;
        case 0x2e6420u: goto label_2e6420;
        case 0x2e6434u: goto label_2e6434;
        case 0x2e6440u: goto label_2e6440;
        case 0x2e6448u: goto label_2e6448;
        default: break;
    }

    ctx->pc = 0x2e6380u;

    // 0x2e6380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e6384: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e6384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e6388: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2e6388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2e638c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e6390: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6394: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e6394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e6398: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e639c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e63a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e63a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e63a4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2e63a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e63a8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2e63a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e63ac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2e63acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2e63b0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e63b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e63b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e63b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e63b8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E63B8u;
    SET_GPR_U32(ctx, 31, 0x2E63C0u);
    ctx->pc = 0x2E63BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E63B8u;
            // 0x2e63bc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63C0u; }
        if (ctx->pc != 0x2E63C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63C0u; }
        if (ctx->pc != 0x2E63C0u) { return; }
    }
    ctx->pc = 0x2E63C0u;
label_2e63c0:
    // 0x2e63c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e63c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e63c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e63c8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E63C8u;
    SET_GPR_U32(ctx, 31, 0x2E63D0u);
    ctx->pc = 0x2E63CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E63C8u;
            // 0x2e63cc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63D0u; }
        if (ctx->pc != 0x2E63D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63D0u; }
        if (ctx->pc != 0x2E63D0u) { return; }
    }
    ctx->pc = 0x2E63D0u;
label_2e63d0:
    // 0x2e63d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e63d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e63d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e63d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e63d8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E63D8u;
    SET_GPR_U32(ctx, 31, 0x2E63E0u);
    ctx->pc = 0x2E63DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E63D8u;
            // 0x2e63dc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63E0u; }
        if (ctx->pc != 0x2E63E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63E0u; }
        if (ctx->pc != 0x2E63E0u) { return; }
    }
    ctx->pc = 0x2E63E0u;
label_2e63e0:
    // 0x2e63e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e63e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e63e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e63e8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E63E8u;
    SET_GPR_U32(ctx, 31, 0x2E63F0u);
    ctx->pc = 0x2E63ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E63E8u;
            // 0x2e63ec: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63F0u; }
        if (ctx->pc != 0x2E63F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E63F0u; }
        if (ctx->pc != 0x2E63F0u) { return; }
    }
    ctx->pc = 0x2E63F0u;
label_2e63f0:
    // 0x2e63f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e63f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e63f4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e63f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e63f8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E63F8u;
    SET_GPR_U32(ctx, 31, 0x2E6400u);
    ctx->pc = 0x2E63FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E63F8u;
            // 0x2e63fc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6400u; }
        if (ctx->pc != 0x2E6400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6400u; }
        if (ctx->pc != 0x2E6400u) { return; }
    }
    ctx->pc = 0x2E6400u;
label_2e6400:
    // 0x2e6400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6404: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e6404u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2e6408: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6408u;
    SET_GPR_U32(ctx, 31, 0x2E6410u);
    ctx->pc = 0x2E640Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6408u;
            // 0x2e640c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6410u; }
        if (ctx->pc != 0x2E6410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6410u; }
        if (ctx->pc != 0x2E6410u) { return; }
    }
    ctx->pc = 0x2E6410u;
label_2e6410:
    // 0x2e6410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6414: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2e6414u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2e6418: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6418u;
    SET_GPR_U32(ctx, 31, 0x2E6420u);
    ctx->pc = 0x2E641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6418u;
            // 0x2e641c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6420u; }
        if (ctx->pc != 0x2E6420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6420u; }
        if (ctx->pc != 0x2E6420u) { return; }
    }
    ctx->pc = 0x2E6420u;
label_2e6420:
    // 0x2e6420: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2e6420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e6424: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6424u;
    {
        const bool branch_taken_0x2e6424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6424u;
            // 0x2e6428: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6424) {
            ctx->pc = 0x2E6438u;
            goto label_2e6438;
        }
    }
    ctx->pc = 0x2E642Cu;
    // 0x2e642c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E642Cu;
    SET_GPR_U32(ctx, 31, 0x2E6434u);
    ctx->pc = 0x2E6430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E642Cu;
            // 0x2e6430: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6434u; }
        if (ctx->pc != 0x2E6434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6434u; }
        if (ctx->pc != 0x2E6434u) { return; }
    }
    ctx->pc = 0x2E6434u;
label_2e6434:
    // 0x2e6434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6438:
    // 0x2e6438: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E6438u;
    {
        const bool branch_taken_0x2e6438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6438u;
            // 0x2e643c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6438) {
            ctx->pc = 0x2E6474u;
            goto label_2e6474;
        }
    }
    ctx->pc = 0x2E6440u;
label_2e6440:
    // 0x2e6440: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6440u;
    SET_GPR_U32(ctx, 31, 0x2E6448u);
    ctx->pc = 0x2E6444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6440u;
            // 0x2e6444: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6448u; }
        if (ctx->pc != 0x2E6448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6448u; }
        if (ctx->pc != 0x2E6448u) { return; }
    }
    ctx->pc = 0x2E6448u;
label_2e6448:
    // 0x2e6448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6448u;
    {
        const bool branch_taken_0x2e6448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6448) {
            ctx->pc = 0x2E6458u;
            goto label_2e6458;
        }
    }
    ctx->pc = 0x2E6450u;
    // 0x2e6450: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E6450u;
    {
        const bool branch_taken_0x2e6450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6450u;
            // 0x2e6454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6450) {
            ctx->pc = 0x2E6488u;
            goto label_2e6488;
        }
    }
    ctx->pc = 0x2E6458u;
label_2e6458:
    // 0x2e6458: 0xe4540040  swc1        $f20, 0x40($v0)
    ctx->pc = 0x2e6458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2e645c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6460: 0xe4550044  swc1        $f21, 0x44($v0)
    ctx->pc = 0x2e6460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2e6464: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x2e6464u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2e6468: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x2e6468u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x2e646c: 0x4618b580  add.s       $f22, $f22, $f24
    ctx->pc = 0x2e646cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x2e6470: 0x4619bdc0  add.s       $f23, $f23, $f25
    ctx->pc = 0x2e6470u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
label_2e6474:
    // 0x2e6474: 0x0  nop
    ctx->pc = 0x2e6474u;
    // NOP
    // 0x2e6478: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e647c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e647cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6480: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E6480u;
    {
        const bool branch_taken_0x2e6480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6480u;
            // 0x2e6484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6480) {
            ctx->pc = 0x2E6440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6440;
        }
    }
    ctx->pc = 0x2E6488u;
label_2e6488:
    // 0x2e6488: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e6488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e648c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2e648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e6490: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2e6490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6494: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2e6494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e6498: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e6498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e649c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2e649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e64a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e64a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e64a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e64a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e64a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e64a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e64ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e64b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e64b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e64b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E64B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E64B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64B4u;
            // 0x2e64b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E64BCu;
}
