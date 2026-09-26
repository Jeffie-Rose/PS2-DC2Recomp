#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWorldDir__8mgCFrameFPfPf
// Address: 0x137870 - 0x1378c8
void GetWorldDir__8mgCFrameFPfPf_0x137870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldDir__8mgCFrameFPfPf_0x137870");
#endif

    switch (ctx->pc) {
        case 0x13789cu: goto label_13789c;
        case 0x1378acu: goto label_1378ac;
        default: break;
    }

    ctx->pc = 0x137870u;

    // 0x137870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x137874: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137878: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x137878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13787c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137880: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x137880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137884: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x137884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137888: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13788c: 0xc4d4000c  lwc1        $f20, 0xC($a2)
    ctx->pc = 0x13788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137890: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x137890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x137894: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x137894u;
    SET_GPR_U32(ctx, 31, 0x13789Cu);
    ctx->pc = 0x137898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137894u;
            // 0x137898: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13789Cu; }
        if (ctx->pc != 0x13789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13789Cu; }
        if (ctx->pc != 0x13789Cu) { return; }
    }
    ctx->pc = 0x13789Cu;
label_13789c:
    // 0x13789c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13789cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1378a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1378a4: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1378A4u;
    SET_GPR_U32(ctx, 31, 0x1378ACu);
    ctx->pc = 0x1378A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1378A4u;
            // 0x1378a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378ACu; }
        if (ctx->pc != 0x1378ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378ACu; }
        if (ctx->pc != 0x1378ACu) { return; }
    }
    ctx->pc = 0x1378ACu;
label_1378ac:
    // 0x1378ac: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1378acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1378b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1378b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1378b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1378b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1378b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1378bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1378bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1378c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1378C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1378C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1378C0u;
            // 0x1378c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1378C8u;
}
