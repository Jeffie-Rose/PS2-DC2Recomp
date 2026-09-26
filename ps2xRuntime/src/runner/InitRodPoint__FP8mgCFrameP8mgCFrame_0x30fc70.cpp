#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitRodPoint__FP8mgCFrameP8mgCFrame
// Address: 0x30fc70 - 0x310020
void InitRodPoint__FP8mgCFrameP8mgCFrame_0x30fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitRodPoint__FP8mgCFrameP8mgCFrame_0x30fc70");
#endif

    switch (ctx->pc) {
        case 0x30fc94u: goto label_30fc94;
        case 0x30fca8u: goto label_30fca8;
        case 0x30fcb0u: goto label_30fcb0;
        case 0x30fcb8u: goto label_30fcb8;
        case 0x30fcd0u: goto label_30fcd0;
        case 0x30fce4u: goto label_30fce4;
        case 0x30fcecu: goto label_30fcec;
        case 0x30fcf4u: goto label_30fcf4;
        case 0x30fd0cu: goto label_30fd0c;
        case 0x30fd20u: goto label_30fd20;
        case 0x30fd28u: goto label_30fd28;
        case 0x30fd30u: goto label_30fd30;
        case 0x30fd50u: goto label_30fd50;
        case 0x30fd68u: goto label_30fd68;
        case 0x30fd80u: goto label_30fd80;
        case 0x30fd98u: goto label_30fd98;
        case 0x30fdb0u: goto label_30fdb0;
        case 0x30fdc8u: goto label_30fdc8;
        case 0x30fde0u: goto label_30fde0;
        case 0x30fdf8u: goto label_30fdf8;
        case 0x30fe10u: goto label_30fe10;
        case 0x30fe20u: goto label_30fe20;
        case 0x30fe28u: goto label_30fe28;
        case 0x30fe40u: goto label_30fe40;
        case 0x30fe4cu: goto label_30fe4c;
        case 0x30fe7cu: goto label_30fe7c;
        case 0x30fe88u: goto label_30fe88;
        case 0x30feb4u: goto label_30feb4;
        case 0x30fec4u: goto label_30fec4;
        case 0x30feecu: goto label_30feec;
        case 0x30ff14u: goto label_30ff14;
        case 0x30ffe0u: goto label_30ffe0;
        case 0x30fff4u: goto label_30fff4;
        default: break;
    }

    ctx->pc = 0x30fc70u;

    // 0x30fc70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30fc74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30fc78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30fc7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30fc80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30fc84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30fc84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30fc8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30fc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30fc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fc94:
    // 0x30fc94: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fc98: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x30fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x30fc9c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x30fc9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30fca0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FCA0u;
    SET_GPR_U32(ctx, 31, 0x30FCA8u);
    ctx->pc = 0x30FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCA0u;
            // 0x30fca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCA8u; }
        if (ctx->pc != 0x30FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCA8u; }
        if (ctx->pc != 0x30FCA8u) { return; }
    }
    ctx->pc = 0x30FCA8u;
label_30fca8:
    // 0x30fca8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FCA8u;
    SET_GPR_U32(ctx, 31, 0x30FCB0u);
    ctx->pc = 0x30FCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCA8u;
            // 0x30fcac: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCB0u; }
        if (ctx->pc != 0x30FCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCB0u; }
        if (ctx->pc != 0x30FCB0u) { return; }
    }
    ctx->pc = 0x30FCB0u;
label_30fcb0:
    // 0x30fcb0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FCB0u;
    SET_GPR_U32(ctx, 31, 0x30FCB8u);
    ctx->pc = 0x30FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCB0u;
            // 0x30fcb4: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCB8u; }
        if (ctx->pc != 0x30FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCB8u; }
        if (ctx->pc != 0x30FCB8u) { return; }
    }
    ctx->pc = 0x30FCB8u;
label_30fcb8:
    // 0x30fcb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30fcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30fcbc: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x30fcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30fcc0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30FCC0u;
    {
        const bool branch_taken_0x30fcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCC0u;
            // 0x30fcc4: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcc0) {
            ctx->pc = 0x30FC94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fc94;
        }
    }
    ctx->pc = 0x30FCC8u;
    // 0x30fcc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30fcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fccc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30fcccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fcd0:
    // 0x30fcd0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fcd4: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x30fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x30fcd8: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x30fcd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30fcdc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FCDCu;
    SET_GPR_U32(ctx, 31, 0x30FCE4u);
    ctx->pc = 0x30FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCDCu;
            // 0x30fce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCE4u; }
        if (ctx->pc != 0x30FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCE4u; }
        if (ctx->pc != 0x30FCE4u) { return; }
    }
    ctx->pc = 0x30FCE4u;
label_30fce4:
    // 0x30fce4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FCE4u;
    SET_GPR_U32(ctx, 31, 0x30FCECu);
    ctx->pc = 0x30FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCE4u;
            // 0x30fce8: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCECu; }
        if (ctx->pc != 0x30FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCECu; }
        if (ctx->pc != 0x30FCECu) { return; }
    }
    ctx->pc = 0x30FCECu;
label_30fcec:
    // 0x30fcec: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FCECu;
    SET_GPR_U32(ctx, 31, 0x30FCF4u);
    ctx->pc = 0x30FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCECu;
            // 0x30fcf0: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCF4u; }
        if (ctx->pc != 0x30FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCF4u; }
        if (ctx->pc != 0x30FCF4u) { return; }
    }
    ctx->pc = 0x30FCF4u;
label_30fcf4:
    // 0x30fcf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30fcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30fcf8: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x30fcf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x30fcfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30FCFCu;
    {
        const bool branch_taken_0x30fcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCFCu;
            // 0x30fd00: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcfc) {
            ctx->pc = 0x30FCD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fcd0;
        }
    }
    ctx->pc = 0x30FD04u;
    // 0x30fd04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30fd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30fd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fd0c:
    // 0x30fd0c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fd10: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x30fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x30fd14: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x30fd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30fd18: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FD18u;
    SET_GPR_U32(ctx, 31, 0x30FD20u);
    ctx->pc = 0x30FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD18u;
            // 0x30fd1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD20u; }
        if (ctx->pc != 0x30FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD20u; }
        if (ctx->pc != 0x30FD20u) { return; }
    }
    ctx->pc = 0x30FD20u;
label_30fd20:
    // 0x30fd20: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FD20u;
    SET_GPR_U32(ctx, 31, 0x30FD28u);
    ctx->pc = 0x30FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD20u;
            // 0x30fd24: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD28u; }
        if (ctx->pc != 0x30FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD28u; }
        if (ctx->pc != 0x30FD28u) { return; }
    }
    ctx->pc = 0x30FD28u;
label_30fd28:
    // 0x30fd28: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FD28u;
    SET_GPR_U32(ctx, 31, 0x30FD30u);
    ctx->pc = 0x30FD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD28u;
            // 0x30fd2c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD30u; }
        if (ctx->pc != 0x30FD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD30u; }
        if (ctx->pc != 0x30FD30u) { return; }
    }
    ctx->pc = 0x30FD30u;
label_30fd30:
    // 0x30fd30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30fd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30fd34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x30fd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30fd38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30FD38u;
    {
        const bool branch_taken_0x30fd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD38u;
            // 0x30fd3c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd38) {
            ctx->pc = 0x30FD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fd0c;
        }
    }
    ctx->pc = 0x30FD40u;
    // 0x30fd40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd48: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FD48u;
    SET_GPR_U32(ctx, 31, 0x30FD50u);
    ctx->pc = 0x30FD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD48u;
            // 0x30fd4c: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD50u; }
        if (ctx->pc != 0x30FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD50u; }
        if (ctx->pc != 0x30FD50u) { return; }
    }
    ctx->pc = 0x30FD50u;
label_30fd50:
    // 0x30fd50: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fd54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fd58: 0xac22e060  sw          $v0, -0x1FA0($at)
    ctx->pc = 0x30fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959200), GPR_U32(ctx, 2));
    // 0x30fd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd60: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FD60u;
    SET_GPR_U32(ctx, 31, 0x30FD68u);
    ctx->pc = 0x30FD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD60u;
            // 0x30fd64: 0x24a52648  addiu       $a1, $a1, 0x2648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD68u; }
        if (ctx->pc != 0x30FD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD68u; }
        if (ctx->pc != 0x30FD68u) { return; }
    }
    ctx->pc = 0x30FD68u;
label_30fd68:
    // 0x30fd68: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fd6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fd70: 0xac22e064  sw          $v0, -0x1F9C($at)
    ctx->pc = 0x30fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959204), GPR_U32(ctx, 2));
    // 0x30fd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd78: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FD78u;
    SET_GPR_U32(ctx, 31, 0x30FD80u);
    ctx->pc = 0x30FD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD78u;
            // 0x30fd7c: 0x24a52650  addiu       $a1, $a1, 0x2650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD80u; }
        if (ctx->pc != 0x30FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD80u; }
        if (ctx->pc != 0x30FD80u) { return; }
    }
    ctx->pc = 0x30FD80u;
label_30fd80:
    // 0x30fd80: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fd84: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fd88: 0xac22e068  sw          $v0, -0x1F98($at)
    ctx->pc = 0x30fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959208), GPR_U32(ctx, 2));
    // 0x30fd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd90: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FD90u;
    SET_GPR_U32(ctx, 31, 0x30FD98u);
    ctx->pc = 0x30FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD90u;
            // 0x30fd94: 0x24a52658  addiu       $a1, $a1, 0x2658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD98u; }
        if (ctx->pc != 0x30FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD98u; }
        if (ctx->pc != 0x30FD98u) { return; }
    }
    ctx->pc = 0x30FD98u;
label_30fd98:
    // 0x30fd98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fd9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fda0: 0xac22e06c  sw          $v0, -0x1F94($at)
    ctx->pc = 0x30fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959212), GPR_U32(ctx, 2));
    // 0x30fda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fda8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FDA8u;
    SET_GPR_U32(ctx, 31, 0x30FDB0u);
    ctx->pc = 0x30FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDA8u;
            // 0x30fdac: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDB0u; }
        if (ctx->pc != 0x30FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDB0u; }
        if (ctx->pc != 0x30FDB0u) { return; }
    }
    ctx->pc = 0x30FDB0u;
label_30fdb0:
    // 0x30fdb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fdb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fdb8: 0xac22e070  sw          $v0, -0x1F90($at)
    ctx->pc = 0x30fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959216), GPR_U32(ctx, 2));
    // 0x30fdbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdc0: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FDC0u;
    SET_GPR_U32(ctx, 31, 0x30FDC8u);
    ctx->pc = 0x30FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDC0u;
            // 0x30fdc4: 0x24a52668  addiu       $a1, $a1, 0x2668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDC8u; }
        if (ctx->pc != 0x30FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDC8u; }
        if (ctx->pc != 0x30FDC8u) { return; }
    }
    ctx->pc = 0x30FDC8u;
label_30fdc8:
    // 0x30fdc8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fdcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fdd0: 0xac22e074  sw          $v0, -0x1F8C($at)
    ctx->pc = 0x30fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959220), GPR_U32(ctx, 2));
    // 0x30fdd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdd8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FDD8u;
    SET_GPR_U32(ctx, 31, 0x30FDE0u);
    ctx->pc = 0x30FDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDD8u;
            // 0x30fddc: 0x24a52670  addiu       $a1, $a1, 0x2670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDE0u; }
        if (ctx->pc != 0x30FDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDE0u; }
        if (ctx->pc != 0x30FDE0u) { return; }
    }
    ctx->pc = 0x30FDE0u;
label_30fde0:
    // 0x30fde0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fde4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30fde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdec: 0xac22e078  sw          $v0, -0x1F88($at)
    ctx->pc = 0x30fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959224), GPR_U32(ctx, 2));
    // 0x30fdf0: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x30FDF0u;
    SET_GPR_U32(ctx, 31, 0x30FDF8u);
    ctx->pc = 0x30FDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDF0u;
            // 0x30fdf4: 0x24a52678  addiu       $a1, $a1, 0x2678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDF8u; }
        if (ctx->pc != 0x30FDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDF8u; }
        if (ctx->pc != 0x30FDF8u) { return; }
    }
    ctx->pc = 0x30FDF8u;
label_30fdf8:
    // 0x30fdf8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fdfc: 0xac22e07c  sw          $v0, -0x1F84($at)
    ctx->pc = 0x30fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959228), GPR_U32(ctx, 2));
    // 0x30fe00: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fe04: 0x8c24e060  lw          $a0, -0x1FA0($at)
    ctx->pc = 0x30fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959200)));
    // 0x30fe08: 0xc04de0c  jal         func_137830
    ctx->pc = 0x30FE08u;
    SET_GPR_U32(ctx, 31, 0x30FE10u);
    ctx->pc = 0x30FE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE08u;
            // 0x30fe0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE10u; }
        if (ctx->pc != 0x30FE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE10u; }
        if (ctx->pc != 0x30FE10u) { return; }
    }
    ctx->pc = 0x30FE10u;
label_30fe10:
    // 0x30fe10: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30fe10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30fe14: 0x8c24e07c  lw          $a0, -0x1F84($at)
    ctx->pc = 0x30fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959228)));
    // 0x30fe18: 0xc04de0c  jal         func_137830
    ctx->pc = 0x30FE18u;
    SET_GPR_U32(ctx, 31, 0x30FE20u);
    ctx->pc = 0x30FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE18u;
            // 0x30fe1c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE20u; }
        if (ctx->pc != 0x30FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE20u; }
        if (ctx->pc != 0x30FE20u) { return; }
    }
    ctx->pc = 0x30FE20u;
label_30fe20:
    // 0x30fe20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30fe20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe28:
    // 0x30fe28: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fe2c: 0x2442e060  addiu       $v0, $v0, -0x1FA0
    ctx->pc = 0x30fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
    // 0x30fe30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30fe34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x30fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30fe38: 0xc04de0c  jal         func_137830
    ctx->pc = 0x30FE38u;
    SET_GPR_U32(ctx, 31, 0x30FE40u);
    ctx->pc = 0x30FE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE38u;
            // 0x30fe3c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE40u; }
        if (ctx->pc != 0x30FE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE40u; }
        if (ctx->pc != 0x30FE40u) { return; }
    }
    ctx->pc = 0x30FE40u;
label_30fe40:
    // 0x30fe40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30fe44: 0xc04c018  jal         func_130060
    ctx->pc = 0x30FE44u;
    SET_GPR_U32(ctx, 31, 0x30FE4Cu);
    ctx->pc = 0x30FE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE44u;
            // 0x30fe48: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE4Cu; }
        if (ctx->pc != 0x30FE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE4Cu; }
        if (ctx->pc != 0x30FE4Cu) { return; }
    }
    ctx->pc = 0x30FE4Cu;
label_30fe4c:
    // 0x30fe4c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fe50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30fe50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30fe54: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x30fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x30fe58: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x30fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30fe5c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x30fe5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x30fe60: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x30fe60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x30fe64: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30FE64u;
    {
        const bool branch_taken_0x30fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE64u;
            // 0x30fe68: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe64) {
            ctx->pc = 0x30FE28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fe28;
        }
    }
    ctx->pc = 0x30FE6Cu;
    // 0x30fe6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30fe70: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x30fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30fe74: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x30FE74u;
    SET_GPR_U32(ctx, 31, 0x30FE7Cu);
    ctx->pc = 0x30FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE74u;
            // 0x30fe78: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE7Cu; }
        if (ctx->pc != 0x30FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE7Cu; }
        if (ctx->pc != 0x30FE7Cu) { return; }
    }
    ctx->pc = 0x30FE7Cu;
label_30fe7c:
    // 0x30fe7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30fe7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30fe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30fe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe88:
    // 0x30fe88: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x30fe88u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fe8c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x30fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x30fe90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30fe90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fe94: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30fe98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30fe98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30fe9c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30fea0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x30fea0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30fea4: 0x0  nop
    ctx->pc = 0x30fea4u;
    // NOP
    // 0x30fea8: 0x0  nop
    ctx->pc = 0x30fea8u;
    // NOP
    // 0x30feac: 0xc041c4a  jal         func_107128
    ctx->pc = 0x30FEACu;
    SET_GPR_U32(ctx, 31, 0x30FEB4u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEB4u; }
        if (ctx->pc != 0x30FEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEB4u; }
        if (ctx->pc != 0x30FEB4u) { return; }
    }
    ctx->pc = 0x30FEB4u;
label_30feb4:
    // 0x30feb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30feb8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x30feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30febc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x30FEBCu;
    SET_GPR_U32(ctx, 31, 0x30FEC4u);
    ctx->pc = 0x30FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FEBCu;
            // 0x30fec0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEC4u; }
        if (ctx->pc != 0x30FEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEC4u; }
        if (ctx->pc != 0x30FEC4u) { return; }
    }
    ctx->pc = 0x30FEC4u;
label_30fec4:
    // 0x30fec4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fec8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x30fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30fecc: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x30feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x30fed0: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x30fed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30fed4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x30fed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fed8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x30fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x30fedc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x30fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x30fee0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x30fee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fee4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30FEE4u;
    SET_GPR_U32(ctx, 31, 0x30FEECu);
    ctx->pc = 0x30FEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FEE4u;
            // 0x30fee8: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEECu; }
        if (ctx->pc != 0x30FEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEECu; }
        if (ctx->pc != 0x30FEECu) { return; }
    }
    ctx->pc = 0x30FEECu;
label_30feec:
    // 0x30feec: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x30FEECu;
    {
        const bool branch_taken_0x30feec = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x30FEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FEECu;
            // 0x30fef0: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feec) {
            ctx->pc = 0x30FF24u;
            goto label_30ff24;
        }
    }
    ctx->pc = 0x30FEF4u;
    // 0x30fef4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fef8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x30fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30fefc: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x30fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x30ff00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30ff04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ff0c: 0xc04c018  jal         func_130060
    ctx->pc = 0x30FF0Cu;
    SET_GPR_U32(ctx, 31, 0x30FF14u);
    ctx->pc = 0x30FF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF0Cu;
            // 0x30ff10: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF14u; }
        if (ctx->pc != 0x30FF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF14u; }
        if (ctx->pc != 0x30FF14u) { return; }
    }
    ctx->pc = 0x30FF14u;
label_30ff14:
    // 0x30ff14: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30ff18: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x30ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x30ff1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30ff20: 0xe440fff0  swc1        $f0, -0x10($v0)
    ctx->pc = 0x30ff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), bits); }
label_30ff24:
    // 0x30ff24: 0x0  nop
    ctx->pc = 0x30ff24u;
    // NOP
    // 0x30ff28: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x30ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x30ff2c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x30ff2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x30ff30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30ff34: 0x532023  subu        $a0, $v0, $s3
    ctx->pc = 0x30ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30ff38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30ff38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ff3c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30ff40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30ff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ff44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30ff44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30ff48: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30ff4c: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x30ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x30ff50: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x30ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30ff54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30ff58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30ff58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ff5c: 0x0  nop
    ctx->pc = 0x30ff5cu;
    // NOP
    // 0x30ff60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30ff60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30ff64: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x30ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30ff68: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x30ff68u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x30ff6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30ff6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30ff70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30ff70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ff74: 0x0  nop
    ctx->pc = 0x30ff74u;
    // NOP
    // 0x30ff78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30ff78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ff7c: 0x0  nop
    ctx->pc = 0x30ff7cu;
    // NOP
    // 0x30ff80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30FF80u;
    {
        const bool branch_taken_0x30ff80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF80u;
            // 0x30ff84: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff80) {
            ctx->pc = 0x30FF8Cu;
            goto label_30ff8c;
        }
    }
    ctx->pc = 0x30FF88u;
    // 0x30ff88: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x30ff88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_30ff8c:
    // 0x30ff8c: 0x0  nop
    ctx->pc = 0x30ff8cu;
    // NOP
    // 0x30ff90: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x30ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x30ff94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x30ff94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ff98: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x30ff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30ff9c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30ffa0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30ffa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x30ffa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30ffa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ffa8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x30ffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x30ffac: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30ffacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30ffb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30ffb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ffb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ffb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ffb8: 0x0  nop
    ctx->pc = 0x30ffb8u;
    // NOP
    // 0x30ffbc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30ffbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30ffc0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x30ffc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30ffc4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30ffc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30ffc8: 0x0  nop
    ctx->pc = 0x30ffc8u;
    // NOP
    // 0x30ffcc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x30ffccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30ffd0: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x30FFD0u;
    {
        const bool branch_taken_0x30ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFD0u;
            // 0x30ffd4: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffd0) {
            ctx->pc = 0x30FE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fe88;
        }
    }
    ctx->pc = 0x30FFD8u;
    // 0x30ffd8: 0xc0c4274  jal         func_3109D0
    ctx->pc = 0x30FFD8u;
    SET_GPR_U32(ctx, 31, 0x30FFE0u);
    ctx->pc = 0x30FFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFD8u;
            // 0x30ffdc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3109D0u;
    if (runtime->hasFunction(0x3109D0u)) {
        auto targetFn = runtime->lookupFunction(0x3109D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFE0u; }
        if (ctx->pc != 0x30FFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetLine__FPf_0x3109d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFE0u; }
        if (ctx->pc != 0x30FFE0u) { return; }
    }
    ctx->pc = 0x30FFE0u;
label_30ffe0:
    // 0x30ffe0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x30ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x30ffe4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30ffe8: 0xaf83a248  sw          $v1, -0x5DB8($gp)
    ctx->pc = 0x30ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 3));
    // 0x30ffec: 0xc0c41cc  jal         func_310730
    ctx->pc = 0x30FFECu;
    SET_GPR_U32(ctx, 31, 0x30FFF4u);
    ctx->pc = 0x30FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFECu;
            // 0x30fff0: 0xaf82a24c  sw          $v0, -0x5DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310730u;
    if (runtime->hasFunction(0x310730u)) {
        auto targetFn = runtime->lookupFunction(0x310730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFF4u; }
        if (ctx->pc != 0x30FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCastingLure__Fv_0x310730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFF4u; }
        if (ctx->pc != 0x30FFF4u) { return; }
    }
    ctx->pc = 0x30FFF4u;
label_30fff4:
    // 0x30fff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fff8: 0xaf80a25c  sw          $zero, -0x5DA4($gp)
    ctx->pc = 0x30fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943324), GPR_U32(ctx, 0));
    // 0x30fffc: 0xaf83a26c  sw          $v1, -0x5D94($gp)
    ctx->pc = 0x30fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943340), GPR_U32(ctx, 3));
    // 0x310000: 0xaf83a264  sw          $v1, -0x5D9C($gp)
    ctx->pc = 0x310000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943332), GPR_U32(ctx, 3));
    // 0x310004: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x310004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x310008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x310008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31000c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31000cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310018: 0x3e00008  jr          $ra
    ctx->pc = 0x310018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31001Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310018u;
            // 0x31001c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310020u;
}
