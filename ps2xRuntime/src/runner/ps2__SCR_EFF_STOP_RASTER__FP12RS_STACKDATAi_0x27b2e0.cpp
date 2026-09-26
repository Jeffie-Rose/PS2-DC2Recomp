#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCR_EFF_STOP_RASTER__FP12RS_STACKDATAi
// Address: 0x27b2e0 - 0x27b360
void ps2__SCR_EFF_STOP_RASTER__FP12RS_STACKDATAi_0x27b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCR_EFF_STOP_RASTER__FP12RS_STACKDATAi_0x27b2e0");
#endif

    switch (ctx->pc) {
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b328u: goto label_27b328;
        case 0x27b344u: goto label_27b344;
        default: break;
    }

    ctx->pc = 0x27b2e0u;

    // 0x27b2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b2e4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x27b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27b2e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b2ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x27b2ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27b2f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27b2f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27b2f4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B2F4u;
    SET_GPR_U32(ctx, 31, 0x27B2FCu);
    ctx->pc = 0x27B2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2F4u;
            // 0x27b2f8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2FCu; }
        if (ctx->pc != 0x27B2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2FCu; }
        if (ctx->pc != 0x27B2FCu) { return; }
    }
    ctx->pc = 0x27B2FCu;
label_27b2fc:
    // 0x27b2fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27b2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b300: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27b300u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27b304: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B304u;
    SET_GPR_U32(ctx, 31, 0x27B30Cu);
    ctx->pc = 0x27B308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B304u;
            // 0x27b308: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B30Cu; }
        if (ctx->pc != 0x27B30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B30Cu; }
        if (ctx->pc != 0x27B30Cu) { return; }
    }
    ctx->pc = 0x27B30Cu;
label_27b30c:
    // 0x27b30c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b310: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27b310u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27b314: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B314u;
    SET_GPR_U32(ctx, 31, 0x27B31Cu);
    ctx->pc = 0x27B318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B314u;
            // 0x27b318: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B31Cu; }
        if (ctx->pc != 0x27B31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B31Cu; }
        if (ctx->pc != 0x27B31Cu) { return; }
    }
    ctx->pc = 0x27B31Cu;
label_27b31c:
    // 0x27b31c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27b31cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27b320: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27B320u;
    SET_GPR_U32(ctx, 31, 0x27B328u);
    ctx->pc = 0x27B324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B320u;
            // 0x27b324: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B328u; }
        if (ctx->pc != 0x27B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B328u; }
        if (ctx->pc != 0x27B328u) { return; }
    }
    ctx->pc = 0x27B328u;
label_27b328:
    // 0x27b328: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27b32c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b334: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x27b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x27b338: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27b338u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27b33c: 0xc098250  jal         func_260940
    ctx->pc = 0x27B33Cu;
    SET_GPR_U32(ctx, 31, 0x27B344u);
    ctx->pc = 0x27B340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B33Cu;
            // 0x27b340: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x260940u;
    if (runtime->hasFunction(0x260940u)) {
        auto targetFn = runtime->lookupFunction(0x260940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B344u; }
        if (ctx->pc != 0x27B344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopRaster__13CScreenEffectFfffi_0x260940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B344u; }
        if (ctx->pc != 0x27B344u) { return; }
    }
    ctx->pc = 0x27B344u;
label_27b344:
    // 0x27b344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b348: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27b348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27b34c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27b34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b354: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b358: 0x3e00008  jr          $ra
    ctx->pc = 0x27B358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B358u;
            // 0x27b35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B360u;
}
