#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_LIGHT_COLOR__FP12RS_STACKDATAi
// Address: 0x2e5380 - 0x2e548c
void ps2__CHR_SET_LIGHT_COLOR__FP12RS_STACKDATAi_0x2e5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_LIGHT_COLOR__FP12RS_STACKDATAi_0x2e5380");
#endif

    switch (ctx->pc) {
        case 0x2e53c8u: goto label_2e53c8;
        case 0x2e53fcu: goto label_2e53fc;
        case 0x2e540cu: goto label_2e540c;
        case 0x2e541cu: goto label_2e541c;
        case 0x2e542cu: goto label_2e542c;
        case 0x2e5454u: goto label_2e5454;
        case 0x2e546cu: goto label_2e546c;
        default: break;
    }

    ctx->pc = 0x2e5380u;

    // 0x2e5380: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e5384: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e538c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e539c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e539cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53a0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E53A0u;
    {
        const bool branch_taken_0x2e53a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E53A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53A0u;
            // 0x2e53a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53a0) {
            ctx->pc = 0x2E53BCu;
            goto label_2e53bc;
        }
    }
    ctx->pc = 0x2E53A8u;
    // 0x2e53a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e53ac: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E53ACu;
    {
        const bool branch_taken_0x2e53ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E53B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53ACu;
            // 0x2e53b0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53ac) {
            ctx->pc = 0x2E53C0u;
            goto label_2e53c0;
        }
    }
    ctx->pc = 0x2E53B4u;
    // 0x2e53b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E53B4u;
    {
        const bool branch_taken_0x2e53b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53B4u;
            // 0x2e53b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53b4) {
            ctx->pc = 0x2E5470u;
            goto label_2e5470;
        }
    }
    ctx->pc = 0x2E53BCu;
label_2e53bc:
    // 0x2e53bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e53c0:
    // 0x2e53c0: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x2E53C0u;
    SET_GPR_U32(ctx, 31, 0x2E53C8u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53C8u; }
        if (ctx->pc != 0x2E53C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53C8u; }
        if (ctx->pc != 0x2E53C8u) { return; }
    }
    ctx->pc = 0x2E53C8u;
label_2e53c8:
    // 0x2e53c8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e53cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E53CCu;
    {
        const bool branch_taken_0x2e53cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e53cc) {
            ctx->pc = 0x2E53DCu;
            goto label_2e53dc;
        }
    }
    ctx->pc = 0x2E53D4u;
    // 0x2e53d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E53D4u;
    {
        const bool branch_taken_0x2e53d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53D4u;
            // 0x2e53d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53d4) {
            ctx->pc = 0x2E5470u;
            goto label_2e5470;
        }
    }
    ctx->pc = 0x2E53DCu;
label_2e53dc:
    // 0x2e53dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e53e0: 0x8c530070  lw          $s3, 0x70($v0)
    ctx->pc = 0x2e53e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e53e4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E53E4u;
    {
        const bool branch_taken_0x2e53e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E53E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53E4u;
            // 0x2e53e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53e4) {
            ctx->pc = 0x2E53F4u;
            goto label_2e53f4;
        }
    }
    ctx->pc = 0x2E53ECu;
    // 0x2e53ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E53ECu;
    {
        const bool branch_taken_0x2e53ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53ECu;
            // 0x2e53f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53ec) {
            ctx->pc = 0x2E5470u;
            goto label_2e5470;
        }
    }
    ctx->pc = 0x2E53F4u;
label_2e53f4:
    // 0x2e53f4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E53F4u;
    SET_GPR_U32(ctx, 31, 0x2E53FCu);
    ctx->pc = 0x2E53F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53F4u;
            // 0x2e53f8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53FCu; }
        if (ctx->pc != 0x2E53FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53FCu; }
        if (ctx->pc != 0x2E53FCu) { return; }
    }
    ctx->pc = 0x2E53FCu;
label_2e53fc:
    // 0x2e53fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e53fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5400: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e5400u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5404: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5404u;
    SET_GPR_U32(ctx, 31, 0x2E540Cu);
    ctx->pc = 0x2E5408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5404u;
            // 0x2e5408: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E540Cu; }
        if (ctx->pc != 0x2E540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E540Cu; }
        if (ctx->pc != 0x2E540Cu) { return; }
    }
    ctx->pc = 0x2E540Cu;
label_2e540c:
    // 0x2e540c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5410: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2e5410u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5414: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5414u;
    SET_GPR_U32(ctx, 31, 0x2E541Cu);
    ctx->pc = 0x2E5418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5414u;
            // 0x2e5418: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E541Cu; }
        if (ctx->pc != 0x2E541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E541Cu; }
        if (ctx->pc != 0x2E541Cu) { return; }
    }
    ctx->pc = 0x2E541Cu;
label_2e541c:
    // 0x2e541c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5420: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2e5420u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5424: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5424u;
    SET_GPR_U32(ctx, 31, 0x2E542Cu);
    ctx->pc = 0x2E5428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5424u;
            // 0x2e5428: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E542Cu; }
        if (ctx->pc != 0x2E542Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E542Cu; }
        if (ctx->pc != 0x2E542Cu) { return; }
    }
    ctx->pc = 0x2E542Cu;
label_2e542c:
    // 0x2e542c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5430: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2e5430u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x2e5434: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2e5434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e5438: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2e5438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e543c: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x2e543cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2e5440: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5440u;
    {
        const bool branch_taken_0x2e5440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5440u;
            // 0x2e5444: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5440) {
            ctx->pc = 0x2E5458u;
            goto label_2e5458;
        }
    }
    ctx->pc = 0x2E5448u;
    // 0x2e5448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e544c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E544Cu;
    SET_GPR_U32(ctx, 31, 0x2E5454u);
    ctx->pc = 0x2E5450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E544Cu;
            // 0x2e5450: 0x36528000  ori         $s2, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5454u; }
        if (ctx->pc != 0x2E5454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5454u; }
        if (ctx->pc != 0x2E5454u) { return; }
    }
    ctx->pc = 0x2E5454u;
label_2e5454:
    // 0x2e5454: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e5454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e5458:
    // 0x2e5458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e545c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e545cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5460: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e5460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e5464: 0xc04de54  jal         func_137950
    ctx->pc = 0x2E5464u;
    SET_GPR_U32(ctx, 31, 0x2E546Cu);
    ctx->pc = 0x2E5468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5464u;
            // 0x2e5468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E546Cu; }
        if (ctx->pc != 0x2E546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E546Cu; }
        if (ctx->pc != 0x2E546Cu) { return; }
    }
    ctx->pc = 0x2E546Cu;
label_2e546c:
    // 0x2e546c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5470:
    // 0x2e5470: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e547c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e547cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5484: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5484u;
            // 0x2e5488: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E548Cu;
}
