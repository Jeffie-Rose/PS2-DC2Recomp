#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NORMAL_VECTOR__FP12RS_STACKDATAi
// Address: 0x1e1360 - 0x1e1400
void ps2__NORMAL_VECTOR__FP12RS_STACKDATAi_0x1e1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NORMAL_VECTOR__FP12RS_STACKDATAi_0x1e1360");
#endif

    switch (ctx->pc) {
        case 0x1e13b8u: goto label_1e13b8;
        case 0x1e13c8u: goto label_1e13c8;
        case 0x1e13d8u: goto label_1e13d8;
        case 0x1e13e4u: goto label_1e13e4;
        default: break;
    }

    ctx->pc = 0x1e1360u;

    // 0x1e1360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1364: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1368: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e136c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e1370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e1374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e137c: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e1380: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1384: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x1e1384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e1388: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e138c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e138cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e1390: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e1394: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e1394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1398: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1e1398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1e139c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e13a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e13a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e13a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e13a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13ac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e13acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e13b0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1E13B0u;
    SET_GPR_U32(ctx, 31, 0x1E13B8u);
    ctx->pc = 0x1E13B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13B0u;
            // 0x1e13b4: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13B8u; }
        if (ctx->pc != 0x1E13B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13B8u; }
        if (ctx->pc != 0x1E13B8u) { return; }
    }
    ctx->pc = 0x1E13B8u;
label_1e13b8:
    // 0x1e13b8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1e13b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e13bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e13bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13c0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E13C0u;
    SET_GPR_U32(ctx, 31, 0x1E13C8u);
    ctx->pc = 0x1E13C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13C0u;
            // 0x1e13c4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13C8u; }
        if (ctx->pc != 0x1E13C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13C8u; }
        if (ctx->pc != 0x1E13C8u) { return; }
    }
    ctx->pc = 0x1E13C8u;
label_1e13c8:
    // 0x1e13c8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1e13c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e13cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e13ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13d0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E13D0u;
    SET_GPR_U32(ctx, 31, 0x1E13D8u);
    ctx->pc = 0x1E13D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13D0u;
            // 0x1e13d4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13D8u; }
        if (ctx->pc != 0x1E13D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13D8u; }
        if (ctx->pc != 0x1E13D8u) { return; }
    }
    ctx->pc = 0x1E13D8u;
label_1e13d8:
    // 0x1e13d8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1e13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e13dc: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E13DCu;
    SET_GPR_U32(ctx, 31, 0x1E13E4u);
    ctx->pc = 0x1E13E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13DCu;
            // 0x1e13e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13E4u; }
        if (ctx->pc != 0x1E13E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13E4u; }
        if (ctx->pc != 0x1E13E4u) { return; }
    }
    ctx->pc = 0x1E13E4u;
label_1e13e4:
    // 0x1e13e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e13e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e13e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e13ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e13ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e13f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e13f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e13f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e13f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e13f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E13F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E13FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13F8u;
            // 0x1e13fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1400u;
}
