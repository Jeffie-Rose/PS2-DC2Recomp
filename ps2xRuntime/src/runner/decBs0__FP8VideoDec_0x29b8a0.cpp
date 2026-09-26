#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: decBs0__FP8VideoDec
// Address: 0x29b8a0 - 0x29ba30
void decBs0__FP8VideoDec_0x29b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decBs0__FP8VideoDec_0x29b8a0");
#endif

    switch (ctx->pc) {
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8d4u: goto label_29b8d4;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8e8u: goto label_29b8e8;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b938u: goto label_29b938;
        case 0x29b948u: goto label_29b948;
        case 0x29b960u: goto label_29b960;
        case 0x29b98cu: goto label_29b98c;
        case 0x29b9b8u: goto label_29b9b8;
        case 0x29b9ecu: goto label_29b9ec;
        case 0x29b9f4u: goto label_29b9f4;
        case 0x29b9fcu: goto label_29b9fc;
        case 0x29ba10u: goto label_29ba10;
        default: break;
    }

    ctx->pc = 0x29b8a0u;

    // 0x29b8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b8a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29b8a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29b8ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29b8b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29b8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b8b8: 0xc04390e  jal         func_10E438
    ctx->pc = 0x29B8B8u;
    SET_GPR_U32(ctx, 31, 0x29B8C0u);
    ctx->pc = 0x29B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8B8u;
            // 0x29b8bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E438u;
    if (runtime->hasFunction(0x10E438u)) {
        auto targetFn = runtime->lookupFunction(0x10E438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8C0u; }
        if (ctx->pc != 0x29B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsEnd_0x10e438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8C0u; }
        if (ctx->pc != 0x29B8C0u) { return; }
    }
    ctx->pc = 0x29B8C0u;
label_29b8c0:
    // 0x29b8c0: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x29B8C0u;
    {
        const bool branch_taken_0x29b8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b8c0) {
            ctx->pc = 0x29BA04u;
            goto label_29ba04;
        }
    }
    ctx->pc = 0x29B8C8u;
label_29b8c8:
    // 0x29b8c8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29b8cc: 0xc0a66b0  jal         func_299AC0
    ctx->pc = 0x29B8CCu;
    SET_GPR_U32(ctx, 31, 0x29B8D4u);
    ctx->pc = 0x29B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8CCu;
            // 0x29b8d0: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299AC0u;
    if (runtime->hasFunction(0x299AC0u)) {
        auto targetFn = runtime->lookupFunction(0x299AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8D4u; }
        if (ctx->pc != 0x29B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufGetData__FP5VoBuf_0x299ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8D4u; }
        if (ctx->pc != 0x29B8D4u) { return; }
    }
    ctx->pc = 0x29B8D4u;
label_29b8d4:
    // 0x29b8d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29B8D4u;
    {
        const bool branch_taken_0x29b8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b8d4) {
            ctx->pc = 0x29B900u;
            goto label_29b900;
        }
    }
    ctx->pc = 0x29B8DCu;
label_29b8dc:
    // 0x29b8dc: 0x0  nop
    ctx->pc = 0x29b8dcu;
    // NOP
    // 0x29b8e0: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x29B8E0u;
    SET_GPR_U32(ctx, 31, 0x29B8E8u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8E8u; }
        if (ctx->pc != 0x29B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8E8u; }
        if (ctx->pc != 0x29B8E8u) { return; }
    }
    ctx->pc = 0x29B8E8u;
label_29b8e8:
    // 0x29b8e8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29b8ec: 0xc0a66b0  jal         func_299AC0
    ctx->pc = 0x29B8ECu;
    SET_GPR_U32(ctx, 31, 0x29B8F4u);
    ctx->pc = 0x29B8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8ECu;
            // 0x29b8f0: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299AC0u;
    if (runtime->hasFunction(0x299AC0u)) {
        auto targetFn = runtime->lookupFunction(0x299AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8F4u; }
        if (ctx->pc != 0x29B8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufGetData__FP5VoBuf_0x299ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8F4u; }
        if (ctx->pc != 0x29B8F4u) { return; }
    }
    ctx->pc = 0x29B8F4u;
label_29b8f4:
    // 0x29b8f4: 0x0  nop
    ctx->pc = 0x29b8f4u;
    // NOP
    // 0x29b8f8: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29B8F8u;
    {
        const bool branch_taken_0x29b8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8f8) {
            ctx->pc = 0x29B8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b8dc;
        }
    }
    ctx->pc = 0x29B900u;
label_29b900:
    // 0x29b900: 0x8f839908  lw          $v1, -0x66F8($gp)
    ctx->pc = 0x29b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x29b904: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B904u;
    {
        const bool branch_taken_0x29b904 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29B908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B904u;
            // 0x29b908: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b904) {
            ctx->pc = 0x29B914u;
            goto label_29b914;
        }
    }
    ctx->pc = 0x29B90Cu;
    // 0x29b90c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x29b910: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x29b910u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_29b914:
    // 0x29b914: 0x8f83990c  lw          $v1, -0x66F4($gp)
    ctx->pc = 0x29b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x29b918: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x29b918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29b91c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B91Cu;
    {
        const bool branch_taken_0x29b91c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29B920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B91Cu;
            // 0x29b920: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b91c) {
            ctx->pc = 0x29B92Cu;
            goto label_29b92c;
        }
    }
    ctx->pc = 0x29B924u;
    // 0x29b924: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x29b928: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
label_29b92c:
    // 0x29b92c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b930: 0xc0438c8  jal         func_10E320
    ctx->pc = 0x29B930u;
    SET_GPR_U32(ctx, 31, 0x29B938u);
    ctx->pc = 0x29B934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B930u;
            // 0x29b934: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E320u;
    if (runtime->hasFunction(0x10E320u)) {
        auto targetFn = runtime->lookupFunction(0x10E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B938u; }
        if (ctx->pc != 0x29B938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegGetPicture_0x10e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B938u; }
        if (ctx->pc != 0x29B938u) { return; }
    }
    ctx->pc = 0x29B938u;
label_29b938:
    // 0x29b938: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B938u;
    {
        const bool branch_taken_0x29b938 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29B93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B938u;
            // 0x29b93c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b938) {
            ctx->pc = 0x29B948u;
            goto label_29b948;
        }
    }
    ctx->pc = 0x29B940u;
    // 0x29b940: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29B940u;
    SET_GPR_U32(ctx, 31, 0x29B948u);
    ctx->pc = 0x29B944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B940u;
            // 0x29b944: 0x2484df50  addiu       $a0, $a0, -0x20B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B948u; }
        if (ctx->pc != 0x29B948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B948u; }
        if (ctx->pc != 0x29B948u) { return; }
    }
    ctx->pc = 0x29B948u;
label_29b948:
    // 0x29b948: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x29b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29b94c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x29B94Cu;
    {
        const bool branch_taken_0x29b94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B94Cu;
            // 0x29b950: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b94c) {
            ctx->pc = 0x29B9DCu;
            goto label_29b9dc;
        }
    }
    ctx->pc = 0x29B954u;
    // 0x29b954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b958: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29B958u;
    {
        const bool branch_taken_0x29b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B958u;
            // 0x29b95c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b958) {
            ctx->pc = 0x29B9C8u;
            goto label_29b9c8;
        }
    }
    ctx->pc = 0x29B960u;
label_29b960:
    // 0x29b960: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29b960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29b964: 0x8c235478  lw          $v1, 0x5478($at)
    ctx->pc = 0x29b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21624)));
    // 0x29b968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b96c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x29b96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29b970: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x29b970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29b974: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29b974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29b978: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29b97c: 0x8c225470  lw          $v0, 0x5470($at)
    ctx->pc = 0x29b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21616)));
    // 0x29b980: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x29b980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x29b984: 0xc0a6e8c  jal         func_29BA30
    ctx->pc = 0x29B984u;
    SET_GPR_U32(ctx, 31, 0x29B98Cu);
    ctx->pc = 0x29B988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B984u;
            // 0x29b988: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BA30u;
    if (runtime->hasFunction(0x29BA30u)) {
        auto targetFn = runtime->lookupFunction(0x29BA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B98Cu; }
        if (ctx->pc != 0x29B98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setImageTag__FPUiPviii_0x29ba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B98Cu; }
        if (ctx->pc != 0x29B98Cu) { return; }
    }
    ctx->pc = 0x29B98Cu;
label_29b98c:
    // 0x29b98c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29b98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29b990: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29b994: 0x8c235478  lw          $v1, 0x5478($at)
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21624)));
    // 0x29b998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b99c: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x29b99cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29b9a0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29b9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29b9a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29b9a8: 0x8c225470  lw          $v0, 0x5470($at)
    ctx->pc = 0x29b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21616)));
    // 0x29b9ac: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x29b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29b9b0: 0xc0a6e8c  jal         func_29BA30
    ctx->pc = 0x29B9B0u;
    SET_GPR_U32(ctx, 31, 0x29B9B8u);
    ctx->pc = 0x29B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9B0u;
            // 0x29b9b4: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BA30u;
    if (runtime->hasFunction(0x29BA30u)) {
        auto targetFn = runtime->lookupFunction(0x29BA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9B8u; }
        if (ctx->pc != 0x29B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setImageTag__FPUiPviii_0x29ba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9B8u; }
        if (ctx->pc != 0x29B9B8u) { return; }
    }
    ctx->pc = 0x29B9B8u;
label_29b9b8:
    // 0x29b9b8: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29b9bc: 0x26520048  addiu       $s2, $s2, 0x48
    ctx->pc = 0x29b9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x29b9c0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29b9c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29b9c8:
    // 0x29b9c8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29b9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29b9cc: 0x8c225484  lw          $v0, 0x5484($at)
    ctx->pc = 0x29b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21636)));
    // 0x29b9d0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29b9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b9d4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x29B9D4u;
    {
        const bool branch_taken_0x29b9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b9d4) {
            ctx->pc = 0x29B960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b960;
        }
    }
    ctx->pc = 0x29B9DCu;
label_29b9dc:
    // 0x29b9dc: 0x0  nop
    ctx->pc = 0x29b9dcu;
    // NOP
    // 0x29b9e0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29b9e4: 0xc0a6690  jal         func_299A40
    ctx->pc = 0x29B9E4u;
    SET_GPR_U32(ctx, 31, 0x29B9ECu);
    ctx->pc = 0x29B9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9E4u;
            // 0x29b9e8: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299A40u;
    if (runtime->hasFunction(0x299A40u)) {
        auto targetFn = runtime->lookupFunction(0x299A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9ECu; }
        if (ctx->pc != 0x29B9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIncCount__FP5VoBuf_0x299a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9ECu; }
        if (ctx->pc != 0x29B9ECu) { return; }
    }
    ctx->pc = 0x29B9ECu;
label_29b9ec:
    // 0x29b9ec: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x29B9ECu;
    SET_GPR_U32(ctx, 31, 0x29B9F4u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9F4u; }
        if (ctx->pc != 0x29B9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9F4u; }
        if (ctx->pc != 0x29B9F4u) { return; }
    }
    ctx->pc = 0x29B9F4u;
label_29b9f4:
    // 0x29b9f4: 0xc04390e  jal         func_10E438
    ctx->pc = 0x29B9F4u;
    SET_GPR_U32(ctx, 31, 0x29B9FCu);
    ctx->pc = 0x29B9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9F4u;
            // 0x29b9f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E438u;
    if (runtime->hasFunction(0x10E438u)) {
        auto targetFn = runtime->lookupFunction(0x10E438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9FCu; }
        if (ctx->pc != 0x29B9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsEnd_0x10e438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9FCu; }
        if (ctx->pc != 0x29B9FCu) { return; }
    }
    ctx->pc = 0x29B9FCu;
label_29b9fc:
    // 0x29b9fc: 0x1040ffb2  beqz        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x29B9FCu;
    {
        const bool branch_taken_0x29b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9fc) {
            ctx->pc = 0x29B8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b8c8;
        }
    }
    ctx->pc = 0x29BA04u;
label_29ba04:
    // 0x29ba04: 0x0  nop
    ctx->pc = 0x29ba04u;
    // NOP
    // 0x29ba08: 0xc043916  jal         func_10E458
    ctx->pc = 0x29BA08u;
    SET_GPR_U32(ctx, 31, 0x29BA10u);
    ctx->pc = 0x29BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA08u;
            // 0x29ba0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E458u;
    if (runtime->hasFunction(0x10E458u)) {
        auto targetFn = runtime->lookupFunction(0x10E458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA10u; }
        if (ctx->pc != 0x29BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegReset_0x10e458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA10u; }
        if (ctx->pc != 0x29BA10u) { return; }
    }
    ctx->pc = 0x29BA10u;
label_29ba10:
    // 0x29ba10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ba18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29ba18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ba1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ba1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ba20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ba20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ba24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ba28: 0x3e00008  jr          $ra
    ctx->pc = 0x29BA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA28u;
            // 0x29ba2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BA30u;
}
