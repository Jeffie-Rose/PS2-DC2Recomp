#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFollowNextPos__15mgCCameraFollowFPf
// Address: 0x131680 - 0x1316fc
void GetFollowNextPos__15mgCCameraFollowFPf_0x131680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFollowNextPos__15mgCCameraFollowFPf_0x131680");
#endif

    switch (ctx->pc) {
        case 0x1316a0u: goto label_1316a0;
        case 0x1316ccu: goto label_1316cc;
        default: break;
    }

    ctx->pc = 0x131680u;

    // 0x131680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13168c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131694: 0xc48c009c  lwc1        $f12, 0x9C($a0)
    ctx->pc = 0x131694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131698: 0xc047a42  jal         func_11E908
    ctx->pc = 0x131698u;
    SET_GPR_U32(ctx, 31, 0x1316A0u);
    ctx->pc = 0x13169Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131698u;
            // 0x13169c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1316A0u; }
        if (ctx->pc != 0x1316A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1316A0u; }
        if (ctx->pc != 0x1316A0u) { return; }
    }
    ctx->pc = 0x1316A0u;
label_1316a0:
    // 0x1316a0: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x1316a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1316a4: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x1316a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1316a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1316a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1316ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1316acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1316b0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1316b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1316b4: 0xc62100b4  lwc1        $f1, 0xB4($s1)
    ctx->pc = 0x1316b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1316b8: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1316b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1316bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1316bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1316c0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1316c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1316c4: 0xc047964  jal         func_11E590
    ctx->pc = 0x1316C4u;
    SET_GPR_U32(ctx, 31, 0x1316CCu);
    ctx->pc = 0x1316C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1316C4u;
            // 0x1316c8: 0xc62c009c  lwc1        $f12, 0x9C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1316CCu; }
        if (ctx->pc != 0x1316CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1316CCu; }
        if (ctx->pc != 0x1316CCu) { return; }
    }
    ctx->pc = 0x1316CCu;
label_1316cc:
    // 0x1316cc: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x1316ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1316d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1316d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1316d4: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x1316d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1316d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1316d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1316dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1316dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1316e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1316e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1316e4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1316e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1316e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1316e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1316ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1316ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1316f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1316f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1316f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1316F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1316F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316F4u;
            // 0x1316f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1316FCu;
}
