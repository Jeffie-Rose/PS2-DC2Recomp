#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FUNCTION_DOOR_MODE__FP12RS_STACKDATAi
// Address: 0x2692d0 - 0x269350
void ps2__FUNCTION_DOOR_MODE__FP12RS_STACKDATAi_0x2692d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FUNCTION_DOOR_MODE__FP12RS_STACKDATAi_0x2692d0");
#endif

    switch (ctx->pc) {
        case 0x26932cu: goto label_26932c;
        default: break;
    }

    ctx->pc = 0x2692d0u;

    // 0x2692d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2692d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2692d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2692d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2692d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2692d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2692dc: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2692dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2692e0: 0xac20e56c  sw          $zero, -0x1A94($at)
    ctx->pc = 0x2692e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960492), GPR_U32(ctx, 0));
    // 0x2692e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2692e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2692e8: 0x8c622e9c  lw          $v0, 0x2E9C($v1)
    ctx->pc = 0x2692e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11932)));
    // 0x2692ec: 0xac22e570  sw          $v0, -0x1A90($at)
    ctx->pc = 0x2692ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960496), GPR_U32(ctx, 2));
    // 0x2692f0: 0x8c622ea0  lw          $v0, 0x2EA0($v1)
    ctx->pc = 0x2692f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11936)));
    // 0x2692f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2692f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2692f8: 0xac22e574  sw          $v0, -0x1A8C($at)
    ctx->pc = 0x2692f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960500), GPR_U32(ctx, 2));
    // 0x2692fc: 0xc4602f30  lwc1        $f0, 0x2F30($v1)
    ctx->pc = 0x2692fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269300: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x269300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x269304: 0xe420e5ac  swc1        $f0, -0x1A54($at)
    ctx->pc = 0x269304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960556), bits); }
    // 0x269308: 0xc4602f34  lwc1        $f0, 0x2F34($v1)
    ctx->pc = 0x269308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26930c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x269310: 0xe420e5b0  swc1        $f0, -0x1A50($at)
    ctx->pc = 0x269310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960560), bits); }
    // 0x269314: 0xc4602f38  lwc1        $f0, 0x2F38($v1)
    ctx->pc = 0x269314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269318: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x269318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26931c: 0xe420e5b4  swc1        $f0, -0x1A4C($at)
    ctx->pc = 0x26931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960564), bits); }
    // 0x269320: 0xc46d2f28  lwc1        $f13, 0x2F28($v1)
    ctx->pc = 0x269320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x269324: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x269324u;
    SET_GPR_U32(ctx, 31, 0x26932Cu);
    ctx->pc = 0x269328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269324u;
            // 0x269328: 0xc46c2f20  lwc1        $f12, 0x2F20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26932Cu; }
        if (ctx->pc != 0x26932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26932Cu; }
        if (ctx->pc != 0x26932Cu) { return; }
    }
    ctx->pc = 0x26932Cu;
label_26932c:
    // 0x26932c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x269330: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x269330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x269334: 0xe420e5b8  swc1        $f0, -0x1A48($at)
    ctx->pc = 0x269334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960568), bits); }
    // 0x269338: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x269338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26933c: 0xac22e500  sw          $v0, -0x1B00($at)
    ctx->pc = 0x26933cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 2));
    // 0x269340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269348: 0x3e00008  jr          $ra
    ctx->pc = 0x269348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269348u;
            // 0x26934c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269350u;
}
