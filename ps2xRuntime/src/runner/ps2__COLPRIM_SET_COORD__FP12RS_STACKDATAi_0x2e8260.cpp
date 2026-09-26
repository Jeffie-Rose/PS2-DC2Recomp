#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_SET_COORD__FP12RS_STACKDATAi
// Address: 0x2e8260 - 0x2e8470
void ps2__COLPRIM_SET_COORD__FP12RS_STACKDATAi_0x2e8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_SET_COORD__FP12RS_STACKDATAi_0x2e8260");
#endif

    switch (ctx->pc) {
        case 0x2e82c8u: goto label_2e82c8;
        case 0x2e82d4u: goto label_2e82d4;
        case 0x2e82e8u: goto label_2e82e8;
        case 0x2e82f8u: goto label_2e82f8;
        case 0x2e8304u: goto label_2e8304;
        case 0x2e8310u: goto label_2e8310;
        case 0x2e8328u: goto label_2e8328;
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8358u: goto label_2e8358;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83c0u: goto label_2e83c0;
        case 0x2e83d0u: goto label_2e83d0;
        case 0x2e83dcu: goto label_2e83dc;
        case 0x2e8400u: goto label_2e8400;
        case 0x2e841cu: goto label_2e841c;
        case 0x2e8440u: goto label_2e8440;
        default: break;
    }

    ctx->pc = 0x2e8260u;

    // 0x2e8260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8264: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e8264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e8268: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e8268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e826c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e8270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8274: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e8278: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e8278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e827c: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x2e827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x2e8280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8280u;
    {
        const bool branch_taken_0x2e8280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8280u;
            // 0x2e8284: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8280) {
            ctx->pc = 0x2E8290u;
            goto label_2e8290;
        }
    }
    ctx->pc = 0x2E8288u;
    // 0x2e8288: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2E8288u;
    {
        const bool branch_taken_0x2e8288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8288u;
            // 0x2e828c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8288) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E8290u;
label_2e8290:
    // 0x2e8290: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8294: 0x10a20043  beq         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2E8294u;
    {
        const bool branch_taken_0x2e8294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8294u;
            // 0x2e8298: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8294) {
            ctx->pc = 0x2E83A4u;
            goto label_2e83a4;
        }
    }
    ctx->pc = 0x2E829Cu;
    // 0x2e829c: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E829Cu;
    {
        const bool branch_taken_0x2e829c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E82A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E829Cu;
            // 0x2e82a0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e829c) {
            ctx->pc = 0x2E8330u;
            goto label_2e8330;
        }
    }
    ctx->pc = 0x2E82A4u;
    // 0x2e82a4: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E82A4u;
    {
        const bool branch_taken_0x2e82a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E82A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82A4u;
            // 0x2e82a8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82a4) {
            ctx->pc = 0x2E82F0u;
            goto label_2e82f0;
        }
    }
    ctx->pc = 0x2E82ACu;
    // 0x2e82ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e82b0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E82B0u;
    {
        const bool branch_taken_0x2e82b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E82B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82B0u;
            // 0x2e82b4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82b0) {
            ctx->pc = 0x2E82C0u;
            goto label_2e82c0;
        }
    }
    ctx->pc = 0x2E82B8u;
    // 0x2e82b8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2E82B8u;
    {
        const bool branch_taken_0x2e82b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82B8u;
            // 0x2e82bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82b8) {
            ctx->pc = 0x2E8448u;
            goto label_2e8448;
        }
    }
    ctx->pc = 0x2E82C0u;
label_2e82c0:
    // 0x2e82c0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E82C0u;
    SET_GPR_U32(ctx, 31, 0x2E82C8u);
    ctx->pc = 0x2E82C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82C0u;
            // 0x2e82c4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82C8u; }
        if (ctx->pc != 0x2E82C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82C8u; }
        if (ctx->pc != 0x2E82C8u) { return; }
    }
    ctx->pc = 0x2E82C8u;
label_2e82c8:
    // 0x2e82c8: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2e82c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2e82cc: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E82CCu;
    SET_GPR_U32(ctx, 31, 0x2E82D4u);
    ctx->pc = 0x2E82D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82CCu;
            // 0x2e82d0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82D4u; }
        if (ctx->pc != 0x2E82D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82D4u; }
        if (ctx->pc != 0x2E82D4u) { return; }
    }
    ctx->pc = 0x2E82D4u;
label_2e82d4:
    // 0x2e82d4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e82d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e82d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e82dc: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e82e0: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2E82E0u;
    SET_GPR_U32(ctx, 31, 0x2E82E8u);
    ctx->pc = 0x2E82E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82E0u;
            // 0x2e82e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82E8u; }
        if (ctx->pc != 0x2E82E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82E8u; }
        if (ctx->pc != 0x2E82E8u) { return; }
    }
    ctx->pc = 0x2E82E8u;
label_2e82e8:
    // 0x2e82e8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2E82E8u;
    {
        const bool branch_taken_0x2e82e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82E8u;
            // 0x2e82ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82e8) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E82F0u;
label_2e82f0:
    // 0x2e82f0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E82F0u;
    SET_GPR_U32(ctx, 31, 0x2E82F8u);
    ctx->pc = 0x2E82F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82F0u;
            // 0x2e82f4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82F8u; }
        if (ctx->pc != 0x2E82F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82F8u; }
        if (ctx->pc != 0x2E82F8u) { return; }
    }
    ctx->pc = 0x2E82F8u;
label_2e82f8:
    // 0x2e82f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e82fc: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E82FCu;
    SET_GPR_U32(ctx, 31, 0x2E8304u);
    ctx->pc = 0x2E8300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82FCu;
            // 0x2e8300: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8304u; }
        if (ctx->pc != 0x2E8304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8304u; }
        if (ctx->pc != 0x2E8304u) { return; }
    }
    ctx->pc = 0x2E8304u;
label_2e8304:
    // 0x2e8304: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x2e8304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2e8308: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E8308u;
    SET_GPR_U32(ctx, 31, 0x2E8310u);
    ctx->pc = 0x2E830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8308u;
            // 0x2e830c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8310u; }
        if (ctx->pc != 0x2E8310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8310u; }
        if (ctx->pc != 0x2E8310u) { return; }
    }
    ctx->pc = 0x2E8310u;
label_2e8310:
    // 0x2e8310: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8314: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e8314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e8318: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e8318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e831c: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8320: 0xc06e788  jal         func_1B9E20
    ctx->pc = 0x2E8320u;
    SET_GPR_U32(ctx, 31, 0x2E8328u);
    ctx->pc = 0x2E8324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8320u;
            // 0x2e8324: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9E20u;
    if (runtime->hasFunction(0x1B9E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8328u; }
        if (ctx->pc != 0x2E8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPfPff_0x1b9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8328u; }
        if (ctx->pc != 0x2E8328u) { return; }
    }
    ctx->pc = 0x2E8328u;
label_2e8328:
    // 0x2e8328: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2E8328u;
    {
        const bool branch_taken_0x2e8328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8328) {
            ctx->pc = 0x2E8450u;
            goto label_2e8450;
        }
    }
    ctx->pc = 0x2E8330u;
label_2e8330:
    // 0x2e8330: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e8334: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8334u;
    {
        const bool branch_taken_0x2e8334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8334u;
            // 0x2e8338: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8334) {
            ctx->pc = 0x2E8344u;
            goto label_2e8344;
        }
    }
    ctx->pc = 0x2E833Cu;
    // 0x2e833c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2E833Cu;
    {
        const bool branch_taken_0x2e833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E833Cu;
            // 0x2e8340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e833c) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E8344u;
label_2e8344:
    // 0x2e8344: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E8344u;
    SET_GPR_U32(ctx, 31, 0x2E834Cu);
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E834Cu; }
        if (ctx->pc != 0x2E834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E834Cu; }
        if (ctx->pc != 0x2E834Cu) { return; }
    }
    ctx->pc = 0x2E834Cu;
label_2e834c:
    // 0x2e834c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8350: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E8350u;
    SET_GPR_U32(ctx, 31, 0x2E8358u);
    ctx->pc = 0x2E8354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8350u;
            // 0x2e8354: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8358u; }
        if (ctx->pc != 0x2E8358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8358u; }
        if (ctx->pc != 0x2E8358u) { return; }
    }
    ctx->pc = 0x2E8358u;
label_2e8358:
    // 0x2e8358: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e835c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e8360: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2e8360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e8364: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8364u;
    {
        const bool branch_taken_0x2e8364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8364u;
            // 0x2e8368: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8364) {
            ctx->pc = 0x2E8374u;
            goto label_2e8374;
        }
    }
    ctx->pc = 0x2E836Cu;
    // 0x2e836c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2E836Cu;
    {
        const bool branch_taken_0x2e836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E836Cu;
            // 0x2e8370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e836c) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E8374u;
label_2e8374:
    // 0x2e8374: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E8374u;
    SET_GPR_U32(ctx, 31, 0x2E837Cu);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E837Cu; }
        if (ctx->pc != 0x2E837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E837Cu; }
        if (ctx->pc != 0x2E837Cu) { return; }
    }
    ctx->pc = 0x2E837Cu;
label_2e837c:
    // 0x2e837c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E837Cu;
    {
        const bool branch_taken_0x2e837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E837Cu;
            // 0x2e8380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e837c) {
            ctx->pc = 0x2E838Cu;
            goto label_2e838c;
        }
    }
    ctx->pc = 0x2E8384u;
    // 0x2e8384: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2E8384u;
    {
        const bool branch_taken_0x2e8384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8384u;
            // 0x2e8388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8384) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E838Cu;
label_2e838c:
    // 0x2e838c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8390: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e8390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8394: 0xc06e7c0  jal         func_1B9F00
    ctx->pc = 0x2E8394u;
    SET_GPR_U32(ctx, 31, 0x2E839Cu);
    ctx->pc = 0x2E8398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8394u;
            // 0x2e8398: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F00u;
    if (runtime->hasFunction(0x1B9F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E839Cu; }
        if (ctx->pc != 0x2E839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFP8mgCFramef_0x1b9f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E839Cu; }
        if (ctx->pc != 0x2E839Cu) { return; }
    }
    ctx->pc = 0x2E839Cu;
label_2e839c:
    // 0x2e839c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E839Cu;
    {
        const bool branch_taken_0x2e839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e839c) {
            ctx->pc = 0x2E8450u;
            goto label_2e8450;
        }
    }
    ctx->pc = 0x2E83A4u;
label_2e83a4:
    // 0x2e83a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e83a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E83A8u;
    {
        const bool branch_taken_0x2e83a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83A8u;
            // 0x2e83ac: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83a8) {
            ctx->pc = 0x2E83B8u;
            goto label_2e83b8;
        }
    }
    ctx->pc = 0x2E83B0u;
    // 0x2e83b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E83B0u;
    {
        const bool branch_taken_0x2e83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83B0u;
            // 0x2e83b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83b0) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E83B8u;
label_2e83b8:
    // 0x2e83b8: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E83B8u;
    SET_GPR_U32(ctx, 31, 0x2E83C0u);
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83C0u; }
        if (ctx->pc != 0x2E83C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83C0u; }
        if (ctx->pc != 0x2E83C0u) { return; }
    }
    ctx->pc = 0x2E83C0u;
label_2e83c0:
    // 0x2e83c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e83c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e83c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83c8: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E83C8u;
    SET_GPR_U32(ctx, 31, 0x2E83D0u);
    ctx->pc = 0x2E83CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83C8u;
            // 0x2e83cc: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83D0u; }
        if (ctx->pc != 0x2E83D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83D0u; }
        if (ctx->pc != 0x2E83D0u) { return; }
    }
    ctx->pc = 0x2E83D0u;
label_2e83d0:
    // 0x2e83d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e83d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83d4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E83D4u;
    SET_GPR_U32(ctx, 31, 0x2E83DCu);
    ctx->pc = 0x2E83D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83D4u;
            // 0x2e83d8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83DCu; }
        if (ctx->pc != 0x2E83DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83DCu; }
        if (ctx->pc != 0x2E83DCu) { return; }
    }
    ctx->pc = 0x2E83DCu;
label_2e83dc:
    // 0x2e83dc: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e83e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e83e4: 0x8c520070  lw          $s2, 0x70($v0)
    ctx->pc = 0x2e83e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e83e8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E83E8u;
    {
        const bool branch_taken_0x2e83e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83E8u;
            // 0x2e83ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83e8) {
            ctx->pc = 0x2E83F8u;
            goto label_2e83f8;
        }
    }
    ctx->pc = 0x2E83F0u;
    // 0x2e83f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E83F0u;
    {
        const bool branch_taken_0x2e83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83F0u;
            // 0x2e83f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83f0) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E83F8u;
label_2e83f8:
    // 0x2e83f8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E83F8u;
    SET_GPR_U32(ctx, 31, 0x2E8400u);
    ctx->pc = 0x2E83FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83F8u;
            // 0x2e83fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8400u; }
        if (ctx->pc != 0x2E8400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8400u; }
        if (ctx->pc != 0x2E8400u) { return; }
    }
    ctx->pc = 0x2E8400u;
label_2e8400:
    // 0x2e8400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8400u;
    {
        const bool branch_taken_0x2e8400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8400u;
            // 0x2e8404: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8400) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8408u;
    // 0x2e8408: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E8408u;
    {
        const bool branch_taken_0x2e8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8408u;
            // 0x2e840c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8408) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E8410u;
label_2e8410:
    // 0x2e8410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8414: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E8414u;
    SET_GPR_U32(ctx, 31, 0x2E841Cu);
    ctx->pc = 0x2E8418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8414u;
            // 0x2e8418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E841Cu; }
        if (ctx->pc != 0x2E841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E841Cu; }
        if (ctx->pc != 0x2E841Cu) { return; }
    }
    ctx->pc = 0x2E841Cu;
label_2e841c:
    // 0x2e841c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E841Cu;
    {
        const bool branch_taken_0x2e841c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E841Cu;
            // 0x2e8420: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e841c) {
            ctx->pc = 0x2E842Cu;
            goto label_2e842c;
        }
    }
    ctx->pc = 0x2E8424u;
    // 0x2e8424: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E8424u;
    {
        const bool branch_taken_0x2e8424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8424u;
            // 0x2e8428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8424) {
            ctx->pc = 0x2E8454u;
            goto label_2e8454;
        }
    }
    ctx->pc = 0x2E842Cu;
label_2e842c:
    // 0x2e842c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8430: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8434: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e8434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8438: 0xc06e7d4  jal         func_1B9F50
    ctx->pc = 0x2E8438u;
    SET_GPR_U32(ctx, 31, 0x2E8440u);
    ctx->pc = 0x2E843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8438u;
            // 0x2e843c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F50u;
    if (runtime->hasFunction(0x1B9F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8440u; }
        if (ctx->pc != 0x2E8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFP8mgCFrameP8mgCFramef_0x1b9f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8440u; }
        if (ctx->pc != 0x2E8440u) { return; }
    }
    ctx->pc = 0x2E8440u;
label_2e8440:
    // 0x2e8440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8440u;
    {
        const bool branch_taken_0x2e8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8440) {
            ctx->pc = 0x2E8450u;
            goto label_2e8450;
        }
    }
    ctx->pc = 0x2E8448u;
label_2e8448:
    // 0x2e8448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8448u;
    {
        const bool branch_taken_0x2e8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8448u;
            // 0x2e844c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8448) {
            ctx->pc = 0x2E8458u;
            goto label_2e8458;
        }
    }
    ctx->pc = 0x2E8450u;
label_2e8450:
    // 0x2e8450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8454:
    // 0x2e8454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e8454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8458:
    // 0x2e8458: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e845c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e845cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8460: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8468: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8468u;
            // 0x2e846c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8470u;
}
