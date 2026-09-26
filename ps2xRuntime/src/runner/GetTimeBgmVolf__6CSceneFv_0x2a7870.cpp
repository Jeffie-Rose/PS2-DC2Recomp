#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTimeBgmVolf__6CSceneFv
// Address: 0x2a7870 - 0x2a7938
void GetTimeBgmVolf__6CSceneFv_0x2a7870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTimeBgmVolf__6CSceneFv_0x2a7870");
#endif

    switch (ctx->pc) {
        case 0x2a7880u: goto label_2a7880;
        case 0x2a7890u: goto label_2a7890;
        default: break;
    }

    ctx->pc = 0x2a7870u;

    // 0x2a7870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7878: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2A7878u;
    SET_GPR_U32(ctx, 31, 0x2A7880u);
    ctx->pc = 0x2A787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7878u;
            // 0x2a787c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7880u; }
        if (ctx->pc != 0x2A7880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7880u; }
        if (ctx->pc != 0x2A7880u) { return; }
    }
    ctx->pc = 0x2A7880u;
label_2a7880:
    // 0x2a7880: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A7880u;
    {
        const bool branch_taken_0x2a7880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7880u;
            // 0x2a7884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7880) {
            ctx->pc = 0x2A7924u;
            goto label_2a7924;
        }
    }
    ctx->pc = 0x2A7888u;
    // 0x2a7888: 0xc05839c  jal         func_160E70
    ctx->pc = 0x2A7888u;
    SET_GPR_U32(ctx, 31, 0x2A7890u);
    ctx->pc = 0x2A788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7888u;
            // 0x2a788c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160E70u;
    if (runtime->hasFunction(0x160E70u)) {
        auto targetFn = runtime->lookupFunction(0x160E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7890u; }
        if (ctx->pc != 0x2A7890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingRatio__4CMapFPf_0x160e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7890u; }
        if (ctx->pc != 0x2A7890u) { return; }
    }
    ctx->pc = 0x2A7890u;
label_2a7890:
    // 0x2a7890: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a7890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7898: 0x0  nop
    ctx->pc = 0x2a7898u;
    // NOP
    // 0x2a789c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a789cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a78a0: 0x0  nop
    ctx->pc = 0x2a78a0u;
    // NOP
    // 0x2a78a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A78A4u;
    {
        const bool branch_taken_0x2a78a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A78A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A78A4u;
            // 0x2a78a8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78a4) {
            ctx->pc = 0x2A78B8u;
            goto label_2a78b8;
        }
    }
    ctx->pc = 0x2A78ACu;
    // 0x2a78ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a78acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a78b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A78B0u;
    {
        const bool branch_taken_0x2a78b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A78B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A78B0u;
            // 0x2a78b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78b0) {
            ctx->pc = 0x2A7930u;
            goto label_2a7930;
        }
    }
    ctx->pc = 0x2A78B8u;
label_2a78b8:
    // 0x2a78b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a78bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a78bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a78c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a78c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a78c4: 0x0  nop
    ctx->pc = 0x2a78c4u;
    // NOP
    // 0x2a78c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2A78C8u;
    {
        const bool branch_taken_0x2a78c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a78c8) {
            ctx->pc = 0x2A78F8u;
            goto label_2a78f8;
        }
    }
    ctx->pc = 0x2A78D0u;
    // 0x2a78d0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2a78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a78d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a78d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a78d8: 0x0  nop
    ctx->pc = 0x2a78d8u;
    // NOP
    // 0x2a78dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A78DCu;
    {
        const bool branch_taken_0x2a78dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a78dc) {
            ctx->pc = 0x2A78ECu;
            goto label_2a78ec;
        }
    }
    ctx->pc = 0x2A78E4u;
    // 0x2a78e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A78E4u;
    {
        const bool branch_taken_0x2a78e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a78e4) {
            ctx->pc = 0x2A78F0u;
            goto label_2a78f0;
        }
    }
    ctx->pc = 0x2A78ECu;
label_2a78ec:
    // 0x2a78ec: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2a78ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2a78f0:
    // 0x2a78f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A78F0u;
    {
        const bool branch_taken_0x2a78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a78f0) {
            ctx->pc = 0x2A791Cu;
            goto label_2a791c;
        }
    }
    ctx->pc = 0x2A78F8u;
label_2a78f8:
    // 0x2a78f8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a78f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a78fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a78fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7900: 0x0  nop
    ctx->pc = 0x2a7900u;
    // NOP
    // 0x2a7904: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7904u;
    {
        const bool branch_taken_0x2a7904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7904) {
            ctx->pc = 0x2A7914u;
            goto label_2a7914;
        }
    }
    ctx->pc = 0x2A790Cu;
    // 0x2a790c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A790Cu;
    {
        const bool branch_taken_0x2a790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A790Cu;
            // 0x2a7910: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a790c) {
            ctx->pc = 0x2A791Cu;
            goto label_2a791c;
        }
    }
    ctx->pc = 0x2A7914u;
label_2a7914:
    // 0x2a7914: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a7914u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a7918: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2a7918u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2a791c:
    // 0x2a791c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A791Cu;
    {
        const bool branch_taken_0x2a791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a791c) {
            ctx->pc = 0x2A792Cu;
            goto label_2a792c;
        }
    }
    ctx->pc = 0x2A7924u;
label_2a7924:
    // 0x2a7924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a792c:
    // 0x2a792c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7930:
    // 0x2a7930: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7930u;
            // 0x2a7934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A7938u;
}
