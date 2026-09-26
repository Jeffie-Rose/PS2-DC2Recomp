#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotation__8mgCFrameFfff
// Address: 0x1378e0 - 0x137924
void SetRotation__8mgCFrameFfff_0x1378e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotation__8mgCFrameFfff_0x1378e0");
#endif

    switch (ctx->pc) {
        case 0x1378e0u: goto label_1378e0;
        case 0x1378e4u: goto label_1378e4;
        case 0x1378e8u: goto label_1378e8;
        case 0x1378ecu: goto label_1378ec;
        case 0x1378f0u: goto label_1378f0;
        case 0x1378f4u: goto label_1378f4;
        case 0x1378f8u: goto label_1378f8;
        case 0x1378fcu: goto label_1378fc;
        case 0x137900u: goto label_137900;
        case 0x137904u: goto label_137904;
        case 0x137908u: goto label_137908;
        case 0x13790cu: goto label_13790c;
        case 0x137910u: goto label_137910;
        case 0x137914u: goto label_137914;
        case 0x137918u: goto label_137918;
        case 0x13791cu: goto label_13791c;
        case 0x137920u: goto label_137920;
        default: break;
    }

    ctx->pc = 0x1378e0u;

label_1378e0:
    // 0x1378e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1378e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1378e4:
    // 0x1378e4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1378e8:
    // 0x1378e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1378e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1378ec:
    // 0x1378ec: 0x24420d90  addiu       $v0, $v0, 0xD90
    ctx->pc = 0x1378ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
label_1378f0:
    // 0x1378f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1378f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1378f4:
    // 0x1378f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1378f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1378f8:
    // 0x1378f8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1378f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1378fc:
    // 0x1378fc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1378fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_137900:
    // 0x137900: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x137900u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_137904:
    // 0x137904: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x137904u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_137908:
    // 0x137908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x137908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13790c:
    // 0x13790c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13790cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_137910:
    // 0x137910: 0x320f809  jalr        $t9
label_137914:
    if (ctx->pc == 0x137914u) {
        ctx->pc = 0x137918u;
        goto label_137918;
    }
    ctx->pc = 0x137910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x137918u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x137918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x137918u; }
            if (ctx->pc != 0x137918u) { return; }
        }
        }
    }
    ctx->pc = 0x137918u;
label_137918:
    // 0x137918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13791c:
    // 0x13791c: 0x3e00008  jr          $ra
label_137920:
    if (ctx->pc == 0x137920u) {
        ctx->pc = 0x137920u;
            // 0x137920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x137924u;
        goto label_fallthrough_0x13791c;
    }
    ctx->pc = 0x13791Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13791Cu;
            // 0x137920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13791c:
    ctx->pc = 0x137924u;
}
