#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckInstallSpace__Fv
// Address: 0x31be60 - 0x31bf5c
void CheckInstallSpace__Fv_0x31be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckInstallSpace__Fv_0x31be60");
#endif

    switch (ctx->pc) {
        case 0x31be90u: goto label_31be90;
        case 0x31bebcu: goto label_31bebc;
        case 0x31bec8u: goto label_31bec8;
        case 0x31bee4u: goto label_31bee4;
        case 0x31beecu: goto label_31beec;
        case 0x31bf0cu: goto label_31bf0c;
        case 0x31bf20u: goto label_31bf20;
        case 0x31bf40u: goto label_31bf40;
        default: break;
    }

    ctx->pc = 0x31be60u;

    // 0x31be60: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x31be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x31be64: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31be64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31be68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31be6c: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x31be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x31be70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31be70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31be74: 0x24054802  addiu       $a1, $zero, 0x4802
    ctx->pc = 0x31be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x31be78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31be78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31be7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31be80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31be84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be88: 0xc045a96  jal         func_116A58
    ctx->pc = 0x31BE88u;
    SET_GPR_U32(ctx, 31, 0x31BE90u);
    ctx->pc = 0x31BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE88u;
            // 0x31be8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A58u;
    if (runtime->hasFunction(0x116A58u)) {
        auto targetFn = runtime->lookupFunction(0x116A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE90u; }
        if (ctx->pc != 0x31BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevctl_0x116a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE90u; }
        if (ctx->pc != 0x31BE90u) { return; }
    }
    ctx->pc = 0x31BE90u;
label_31be90:
    // 0x31be90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31be90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be94: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BE94u;
    {
        const bool branch_taken_0x31be94 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x31BE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE94u;
            // 0x31be98: 0x102ac3  sra         $a1, $s0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be94) {
            ctx->pc = 0x31BEA4u;
            goto label_31bea4;
        }
    }
    ctx->pc = 0x31BE9Cu;
    // 0x31be9c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x31BE9Cu;
    {
        const bool branch_taken_0x31be9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE9Cu;
            // 0x31bea0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be9c) {
            ctx->pc = 0x31BF4Cu;
            goto label_31bf4c;
        }
    }
    ctx->pc = 0x31BEA4u;
label_31bea4:
    // 0x31bea4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BEA4u;
    {
        const bool branch_taken_0x31bea4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x31BEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEA4u;
            // 0x31bea8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bea4) {
            ctx->pc = 0x31BEB4u;
            goto label_31beb4;
        }
    }
    ctx->pc = 0x31BEACu;
    // 0x31beac: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x31beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
    // 0x31beb0: 0x22ac3  sra         $a1, $v0, 11
    ctx->pc = 0x31beb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_31beb4:
    // 0x31beb4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31BEB4u;
    SET_GPR_U32(ctx, 31, 0x31BEBCu);
    ctx->pc = 0x31BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEB4u;
            // 0x31beb8: 0x24842e48  addiu       $a0, $a0, 0x2E48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEBCu; }
        if (ctx->pc != 0x31BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEBCu; }
        if (ctx->pc != 0x31BEBCu) { return; }
    }
    ctx->pc = 0x31BEBCu;
label_31bebc:
    // 0x31bebc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bec0: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x31BEC0u;
    SET_GPR_U32(ctx, 31, 0x31BEC8u);
    ctx->pc = 0x31BEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEC0u;
            // 0x31bec4: 0x24842d70  addiu       $a0, $a0, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (runtime->hasFunction(0x115A80u)) {
        auto targetFn = runtime->lookupFunction(0x115A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEC8u; }
        if (ctx->pc != 0x31BEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDopen_0x115a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEC8u; }
        if (ctx->pc != 0x31BEC8u) { return; }
    }
    ctx->pc = 0x31BEC8u;
label_31bec8:
    // 0x31bec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31bec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31becc: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BECCu;
    {
        const bool branch_taken_0x31becc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x31BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BECCu;
            // 0x31bed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31becc) {
            ctx->pc = 0x31BEDCu;
            goto label_31bedc;
        }
    }
    ctx->pc = 0x31BED4u;
    // 0x31bed4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x31BED4u;
    {
        const bool branch_taken_0x31bed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bed4) {
            ctx->pc = 0x31BF48u;
            goto label_31bf48;
        }
    }
    ctx->pc = 0x31BEDCu;
label_31bedc:
    // 0x31bedc: 0xc04572c  jal         func_115CB0
    ctx->pc = 0x31BEDCu;
    SET_GPR_U32(ctx, 31, 0x31BEE4u);
    ctx->pc = 0x31BEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEDCu;
            // 0x31bee0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115CB0u;
    if (runtime->hasFunction(0x115CB0u)) {
        auto targetFn = runtime->lookupFunction(0x115CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEE4u; }
        if (ctx->pc != 0x31BEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDread_0x115cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEE4u; }
        if (ctx->pc != 0x31BEE4u) { return; }
    }
    ctx->pc = 0x31BEE4u;
label_31bee4:
    // 0x31bee4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31BEE4u;
    {
        const bool branch_taken_0x31bee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31bee4) {
            ctx->pc = 0x31BF14u;
            goto label_31bf14;
        }
    }
    ctx->pc = 0x31BEECu;
label_31beec:
    // 0x31beec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x31beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BEF0u;
    {
        const bool branch_taken_0x31bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bef0) {
            ctx->pc = 0x31BF00u;
            goto label_31bf00;
        }
    }
    ctx->pc = 0x31BEF8u;
    // 0x31bef8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31befc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x31befcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31bf00:
    // 0x31bf00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf04: 0xc04572c  jal         func_115CB0
    ctx->pc = 0x31BF04u;
    SET_GPR_U32(ctx, 31, 0x31BF0Cu);
    ctx->pc = 0x31BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF04u;
            // 0x31bf08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115CB0u;
    if (runtime->hasFunction(0x115CB0u)) {
        auto targetFn = runtime->lookupFunction(0x115CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF0Cu; }
        if (ctx->pc != 0x31BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDread_0x115cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF0Cu; }
        if (ctx->pc != 0x31BF0Cu) { return; }
    }
    ctx->pc = 0x31BF0Cu;
label_31bf0c:
    // 0x31bf0c: 0x1c40fff7  bgtz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31BF0Cu;
    {
        const bool branch_taken_0x31bf0c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x31bf0c) {
            ctx->pc = 0x31BEECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31beec;
        }
    }
    ctx->pc = 0x31BF14u;
label_31bf14:
    // 0x31bf14: 0x0  nop
    ctx->pc = 0x31bf14u;
    // NOP
    // 0x31bf18: 0xc0456d2  jal         func_115B48
    ctx->pc = 0x31BF18u;
    SET_GPR_U32(ctx, 31, 0x31BF20u);
    ctx->pc = 0x31BF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF18u;
            // 0x31bf1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115B48u;
    if (runtime->hasFunction(0x115B48u)) {
        auto targetFn = runtime->lookupFunction(0x115B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF20u; }
        if (ctx->pc != 0x31BF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDclose_0x115b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF20u; }
        if (ctx->pc != 0x31BF20u) { return; }
    }
    ctx->pc = 0x31BF20u;
label_31bf20:
    // 0x31bf20: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BF20u;
    {
        const bool branch_taken_0x31bf20 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x31BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF20u;
            // 0x31bf24: 0x108ac3  sra         $s1, $s0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf20) {
            ctx->pc = 0x31BF30u;
            goto label_31bf30;
        }
    }
    ctx->pc = 0x31BF28u;
    // 0x31bf28: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x31bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
    // 0x31bf2c: 0x28ac3  sra         $s1, $v0, 11
    ctx->pc = 0x31bf2cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 11));
label_31bf30:
    // 0x31bf30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bf34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf38: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31BF38u;
    SET_GPR_U32(ctx, 31, 0x31BF40u);
    ctx->pc = 0x31BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF38u;
            // 0x31bf3c: 0x24842e58  addiu       $a0, $a0, 0x2E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF40u; }
        if (ctx->pc != 0x31BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF40u; }
        if (ctx->pc != 0x31BF40u) { return; }
    }
    ctx->pc = 0x31BF40u;
label_31bf40:
    // 0x31bf40: 0x2a220600  slti        $v0, $s1, 0x600
    ctx->pc = 0x31bf40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x31bf44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_31bf48:
    // 0x31bf48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31bf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31bf4c:
    // 0x31bf4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31bf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bf50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31bf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bf54: 0x3e00008  jr          $ra
    ctx->pc = 0x31BF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF54u;
            // 0x31bf58: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BF5Cu;
}
