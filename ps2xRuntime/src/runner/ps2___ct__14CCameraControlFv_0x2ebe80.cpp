#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CCameraControlFv
// Address: 0x2ebe80 - 0x2ebfa0
void ps2___ct__14CCameraControlFv_0x2ebe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CCameraControlFv_0x2ebe80");
#endif

    switch (ctx->pc) {
        case 0x2ebeb0u: goto label_2ebeb0;
        case 0x2ebec4u: goto label_2ebec4;
        case 0x2ebf0cu: goto label_2ebf0c;
        case 0x2ebf1cu: goto label_2ebf1c;
        case 0x2ebf78u: goto label_2ebf78;
        case 0x2ebf80u: goto label_2ebf80;
        case 0x2ebf8cu: goto label_2ebf8c;
        default: break;
    }

    ctx->pc = 0x2ebe80u;

    // 0x2ebe80: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ebe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ebe84: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2ebe84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2ebe88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ebe88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebe8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ebe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ebe90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ebe94: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ebe94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ebe98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ebe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ebe9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ebe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ebea0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ebea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ebea4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ebea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ebea8: 0xc04c6a4  jal         func_131A90
    ctx->pc = 0x2EBEA8u;
    SET_GPR_U32(ctx, 31, 0x2EBEB0u);
    ctx->pc = 0x2EBEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBEA8u;
            // 0x2ebeac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A90u;
    if (runtime->hasFunction(0x131A90u)) {
        auto targetFn = runtime->lookupFunction(0x131A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBEB0u; }
        if (ctx->pc != 0x2EBEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCCameraFollowFffff_0x131a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBEB0u; }
        if (ctx->pc != 0x2EBEB0u) { return; }
    }
    ctx->pc = 0x2EBEB0u;
label_2ebeb0:
    // 0x2ebeb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ebeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ebeb4: 0x260400f4  addiu       $a0, $s0, 0xF4
    ctx->pc = 0x2ebeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    // 0x2ebeb8: 0x24426330  addiu       $v0, $v0, 0x6330
    ctx->pc = 0x2ebeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25392));
    // 0x2ebebc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2ebebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2ebec0: 0x260301a4  addiu       $v1, $s0, 0x1A4
    ctx->pc = 0x2ebec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
label_2ebec4:
    // 0x2ebec4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2ebec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2ebec8: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x2ebec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x2ebecc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ebeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ebed0: 0x0  nop
    ctx->pc = 0x2ebed0u;
    // NOP
    // 0x2ebed4: 0x0  nop
    ctx->pc = 0x2ebed4u;
    // NOP
    // 0x2ebed8: 0x0  nop
    ctx->pc = 0x2ebed8u;
    // NOP
    // 0x2ebedc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EBEDCu;
    {
        const bool branch_taken_0x2ebedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebedc) {
            ctx->pc = 0x2EBEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebec4;
        }
    }
    ctx->pc = 0x2EBEE4u;
    // 0x2ebee4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ebee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ebee8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ebee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ebeec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ebeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebef0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ebef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ebef4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ebef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ebef8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ebef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ebefc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ebefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ebf00: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ebf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ebf04: 0xc04c6a4  jal         func_131A90
    ctx->pc = 0x2EBF04u;
    SET_GPR_U32(ctx, 31, 0x2EBF0Cu);
    ctx->pc = 0x2EBF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF04u;
            // 0x2ebf08: 0xae0001cc  sw          $zero, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A90u;
    if (runtime->hasFunction(0x131A90u)) {
        auto targetFn = runtime->lookupFunction(0x131A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF0Cu; }
        if (ctx->pc != 0x2EBF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCCameraFollowFffff_0x131a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF0Cu; }
        if (ctx->pc != 0x2EBF0Cu) { return; }
    }
    ctx->pc = 0x2EBF0Cu;
label_2ebf0c:
    // 0x2ebf0c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2ebf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2ebf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf14: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2EBF14u;
    SET_GPR_U32(ctx, 31, 0x2EBF1Cu);
    ctx->pc = 0x2EBF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF14u;
            // 0x2ebf18: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF1Cu; }
        if (ctx->pc != 0x2EBF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF1Cu; }
        if (ctx->pc != 0x2EBF1Cu) { return; }
    }
    ctx->pc = 0x2EBF1Cu;
label_2ebf1c:
    // 0x2ebf1c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ebf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2ebf20: 0x3c044320  lui         $a0, 0x4320
    ctx->pc = 0x2ebf20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17184 << 16));
    // 0x2ebf24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ebf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ebf28: 0x3c05c170  lui         $a1, 0xC170
    ctx->pc = 0x2ebf28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49520 << 16));
    // 0x2ebf2c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2ebf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2ebf30: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2ebf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x2ebf34: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2ebf34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2ebf38: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2ebf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2ebf3c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2ebf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2ebf40: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2ebf44: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2ebf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2ebf48: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2ebf48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2ebf4c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x2ebf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x2ebf50: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2ebf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2ebf54: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x2ebf54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x2ebf58: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x2ebf58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x2ebf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf60: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x2ebf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x2ebf64: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2ebf64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2ebf68: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x2ebf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x2ebf6c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2ebf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2ebf70: 0xc0bb004  jal         func_2EC010
    ctx->pc = 0x2EBF70u;
    SET_GPR_U32(ctx, 31, 0x2EBF78u);
    ctx->pc = 0x2EBF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF70u;
            // 0x2ebf74: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC010u;
    if (runtime->hasFunction(0x2EC010u)) {
        auto targetFn = runtime->lookupFunction(0x2EC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF78u; }
        if (ctx->pc != 0x2EBF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStatus__14CCameraControlFv_0x2ec010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF78u; }
        if (ctx->pc != 0x2EBF78u) { return; }
    }
    ctx->pc = 0x2EBF78u;
label_2ebf78:
    // 0x2ebf78: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2EBF78u;
    SET_GPR_U32(ctx, 31, 0x2EBF80u);
    ctx->pc = 0x2EBF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF78u;
            // 0x2ebf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF80u; }
        if (ctx->pc != 0x2EBF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF80u; }
        if (ctx->pc != 0x2EBF80u) { return; }
    }
    ctx->pc = 0x2EBF80u;
label_2ebf80:
    // 0x2ebf80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ebf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf84: 0xc06aeac  jal         func_1ABAB0
    ctx->pc = 0x2EBF84u;
    SET_GPR_U32(ctx, 31, 0x2EBF8Cu);
    ctx->pc = 0x2EBF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF84u;
            // 0x2ebf88: 0x260401a4  addiu       $a0, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABAB0u;
    if (runtime->hasFunction(0x1ABAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF8Cu; }
        if (ctx->pc != 0x2EBF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__15CameraCtrlParamFRC15CameraCtrlParam_0x1abab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBF8Cu; }
        if (ctx->pc != 0x2EBF8Cu) { return; }
    }
    ctx->pc = 0x2EBF8Cu;
label_2ebf8c:
    // 0x2ebf8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ebf8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ebf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebf94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF98u;
            // 0x2ebf9c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBFA0u;
}
