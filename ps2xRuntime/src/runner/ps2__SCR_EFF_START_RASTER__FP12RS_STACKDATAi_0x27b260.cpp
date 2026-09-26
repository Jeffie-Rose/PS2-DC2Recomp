#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCR_EFF_START_RASTER__FP12RS_STACKDATAi
// Address: 0x27b260 - 0x27b2e0
void ps2__SCR_EFF_START_RASTER__FP12RS_STACKDATAi_0x27b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCR_EFF_START_RASTER__FP12RS_STACKDATAi_0x27b260");
#endif

    switch (ctx->pc) {
        case 0x27b27cu: goto label_27b27c;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2c4u: goto label_27b2c4;
        default: break;
    }

    ctx->pc = 0x27b260u;

    // 0x27b260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b264: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x27b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27b268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b26c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x27b26cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27b270: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27b270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27b274: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B274u;
    SET_GPR_U32(ctx, 31, 0x27B27Cu);
    ctx->pc = 0x27B278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B274u;
            // 0x27b278: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B27Cu; }
        if (ctx->pc != 0x27B27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B27Cu; }
        if (ctx->pc != 0x27B27Cu) { return; }
    }
    ctx->pc = 0x27B27Cu;
label_27b27c:
    // 0x27b27c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27b27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b280: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27b280u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27b284: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B284u;
    SET_GPR_U32(ctx, 31, 0x27B28Cu);
    ctx->pc = 0x27B288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B284u;
            // 0x27b288: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B28Cu; }
        if (ctx->pc != 0x27B28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B28Cu; }
        if (ctx->pc != 0x27B28Cu) { return; }
    }
    ctx->pc = 0x27B28Cu;
label_27b28c:
    // 0x27b28c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b290: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27b290u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27b294: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B294u;
    SET_GPR_U32(ctx, 31, 0x27B29Cu);
    ctx->pc = 0x27B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B294u;
            // 0x27b298: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B29Cu; }
        if (ctx->pc != 0x27B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B29Cu; }
        if (ctx->pc != 0x27B29Cu) { return; }
    }
    ctx->pc = 0x27B29Cu;
label_27b29c:
    // 0x27b29c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27b29cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27b2a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27B2A0u;
    SET_GPR_U32(ctx, 31, 0x27B2A8u);
    ctx->pc = 0x27B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2A0u;
            // 0x27b2a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2A8u; }
        if (ctx->pc != 0x27B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2A8u; }
        if (ctx->pc != 0x27B2A8u) { return; }
    }
    ctx->pc = 0x27B2A8u;
label_27b2a8:
    // 0x27b2a8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27b2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b2b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b2b4: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x27b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x27b2b8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27b2b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27b2bc: 0xc09824c  jal         func_260930
    ctx->pc = 0x27B2BCu;
    SET_GPR_U32(ctx, 31, 0x27B2C4u);
    ctx->pc = 0x27B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2BCu;
            // 0x27b2c0: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x260930u;
    if (runtime->hasFunction(0x260930u)) {
        auto targetFn = runtime->lookupFunction(0x260930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2C4u; }
        if (ctx->pc != 0x27B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartRaster__13CScreenEffectFfffi_0x260930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2C4u; }
        if (ctx->pc != 0x27B2C4u) { return; }
    }
    ctx->pc = 0x27B2C4u;
label_27b2c4:
    // 0x27b2c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b2c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27b2cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b2d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2D8u;
            // 0x27b2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B2E0u;
}
