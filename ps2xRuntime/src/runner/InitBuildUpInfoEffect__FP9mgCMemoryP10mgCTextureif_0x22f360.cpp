#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBuildUpInfoEffect__FP9mgCMemoryP10mgCTextureif
// Address: 0x22f360 - 0x22f3c8
void InitBuildUpInfoEffect__FP9mgCMemoryP10mgCTextureif_0x22f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBuildUpInfoEffect__FP9mgCMemoryP10mgCTextureif_0x22f360");
#endif

    switch (ctx->pc) {
        case 0x22f3a4u: goto label_22f3a4;
        case 0x22f3b0u: goto label_22f3b0;
        case 0x22f3b8u: goto label_22f3b8;
        default: break;
    }

    ctx->pc = 0x22f360u;

    // 0x22f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22f364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22f368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f36c: 0xaf85947c  sw          $a1, -0x6B84($gp)
    ctx->pc = 0x22f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939772), GPR_U32(ctx, 5));
    // 0x22f370: 0xe78c9488  swc1        $f12, -0x6B78($gp)
    ctx->pc = 0x22f370u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939784), bits); }
    // 0x22f374: 0xaf809480  sw          $zero, -0x6B80($gp)
    ctx->pc = 0x22f374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939776), GPR_U32(ctx, 0));
    // 0x22f378: 0xaf869484  sw          $a2, -0x6B7C($gp)
    ctx->pc = 0x22f378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939780), GPR_U32(ctx, 6));
    // 0x22f37c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F37Cu;
    {
        const bool branch_taken_0x22f37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F37Cu;
            // 0x22f380: 0xaf80948c  sw          $zero, -0x6B74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f37c) {
            ctx->pc = 0x22F3B8u;
            goto label_22f3b8;
        }
    }
    ctx->pc = 0x22F384u;
    // 0x22f384: 0x68180  sll         $s0, $a2, 6
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x22f388: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x22f388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x22f38c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F38Cu;
    {
        const bool branch_taken_0x22f38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F38Cu;
            // 0x22f390: 0x101102  srl         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f38c) {
            ctx->pc = 0x22F39Cu;
            goto label_22f39c;
        }
    }
    ctx->pc = 0x22F394u;
    // 0x22f394: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x22f394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x22f398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22f39c:
    // 0x22f39c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22F39Cu;
    SET_GPR_U32(ctx, 31, 0x22F3A4u);
    ctx->pc = 0x22F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F39Cu;
            // 0x22f3a0: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3A4u; }
        if (ctx->pc != 0x22F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3A4u; }
        if (ctx->pc != 0x22F3A4u) { return; }
    }
    ctx->pc = 0x22F3A4u;
label_22f3a4:
    // 0x22f3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3a8: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x22F3A8u;
    SET_GPR_U32(ctx, 31, 0x22F3B0u);
    ctx->pc = 0x22F3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3A8u;
            // 0x22f3ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3B0u; }
        if (ctx->pc != 0x22F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3B0u; }
        if (ctx->pc != 0x22F3B0u) { return; }
    }
    ctx->pc = 0x22F3B0u;
label_22f3b0:
    // 0x22f3b0: 0xc08bcac  jal         func_22F2B0
    ctx->pc = 0x22F3B0u;
    SET_GPR_U32(ctx, 31, 0x22F3B8u);
    ctx->pc = 0x22F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3B0u;
            // 0x22f3b4: 0xaf829480  sw          $v0, -0x6B80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F2B0u;
    if (runtime->hasFunction(0x22F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3B8u; }
        if (ctx->pc != 0x22F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitInitBuildUpInfoEffectPos__Fv_0x22f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3B8u; }
        if (ctx->pc != 0x22F3B8u) { return; }
    }
    ctx->pc = 0x22F3B8u;
label_22f3b8:
    // 0x22f3b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x22F3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3C0u;
            // 0x22f3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F3C8u;
}
