#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadTakePhoto__FiP9mgCMemoryP1
// Address: 0x30e5a0 - 0x30e63c
void LoadTakePhoto__FiP9mgCMemoryP1_0x30e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadTakePhoto__FiP9mgCMemoryP1_0x30e5a0");
#endif

    switch (ctx->pc) {
        case 0x30e5e4u: goto label_30e5e4;
        case 0x30e5f8u: goto label_30e5f8;
        case 0x30e608u: goto label_30e608;
        case 0x30e618u: goto label_30e618;
        case 0x30e62cu: goto label_30e62c;
        default: break;
    }

    ctx->pc = 0x30e5a0u;

    // 0x30e5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e5a4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x30e5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x30e5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e5ac: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x30e5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e5b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30e5b4: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x30e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x30e5b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30e5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5bc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x30e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x30e5c0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x30e5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x30e5c4: 0x24c62620  addiu       $a2, $a2, 0x2620
    ctx->pc = 0x30e5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9760));
    // 0x30e5c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x30e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x30e5cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e5ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5d0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x30e5d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30e5d4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x30e5d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30e5d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5dc: 0xc04b450  jal         func_12D140
    ctx->pc = 0x30E5DCu;
    SET_GPR_U32(ctx, 31, 0x30E5E4u);
    ctx->pc = 0x30E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E5DCu;
            // 0x30e5e0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E5E4u; }
        if (ctx->pc != 0x30E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E5E4u; }
        if (ctx->pc != 0x30E5E4u) { return; }
    }
    ctx->pc = 0x30E5E4u;
label_30e5e4:
    // 0x30e5e4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30e5e8: 0xaf82a22c  sw          $v0, -0x5DD4($gp)
    ctx->pc = 0x30e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943276), GPR_U32(ctx, 2));
    // 0x30e5ec: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30e5f0: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x30E5F0u;
    SET_GPR_U32(ctx, 31, 0x30E5F8u);
    ctx->pc = 0x30E5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E5F0u;
            // 0x30e5f4: 0xaf90a228  sw          $s0, -0x5DD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E5F8u; }
        if (ctx->pc != 0x30E5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E5F8u; }
        if (ctx->pc != 0x30E5F8u) { return; }
    }
    ctx->pc = 0x30E5F8u;
label_30e5f8:
    // 0x30e5f8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30e5fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30e600: 0xc0b5720  jal         func_2D5C80
    ctx->pc = 0x30E600u;
    SET_GPR_U32(ctx, 31, 0x30E608u);
    ctx->pc = 0x30E604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E600u;
            // 0x30e604: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C80u;
    if (runtime->hasFunction(0x2D5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2D5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E608u; }
        if (ctx->pc != 0x30E608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__5CFontFi_0x2d5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E608u; }
        if (ctx->pc != 0x30E608u) { return; }
    }
    ctx->pc = 0x30E608u;
label_30e608:
    // 0x30e608: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30e608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30e60c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e610: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x30E610u;
    SET_GPR_U32(ctx, 31, 0x30E618u);
    ctx->pc = 0x30E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E610u;
            // 0x30e614: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E618u; }
        if (ctx->pc != 0x30E618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E618u; }
        if (ctx->pc != 0x30E618u) { return; }
    }
    ctx->pc = 0x30E618u;
label_30e618:
    // 0x30e618: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30e61c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30e620: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30e624: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x30E624u;
    SET_GPR_U32(ctx, 31, 0x30E62Cu);
    ctx->pc = 0x30E628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E624u;
            // 0x30e628: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E62Cu; }
        if (ctx->pc != 0x30E62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E62Cu; }
        if (ctx->pc != 0x30E62Cu) { return; }
    }
    ctx->pc = 0x30E62Cu;
label_30e62c:
    // 0x30e62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e630: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30e630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e634: 0x3e00008  jr          $ra
    ctx->pc = 0x30E634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E634u;
            // 0x30e638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E63Cu;
}
