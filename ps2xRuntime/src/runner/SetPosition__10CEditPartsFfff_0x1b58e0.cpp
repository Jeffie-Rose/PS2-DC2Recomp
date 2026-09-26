#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__10CEditPartsFfff
// Address: 0x1b58e0 - 0x1b5924
void SetPosition__10CEditPartsFfff_0x1b58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__10CEditPartsFfff_0x1b58e0");
#endif

    switch (ctx->pc) {
        case 0x1b58e0u: goto label_1b58e0;
        case 0x1b58e4u: goto label_1b58e4;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f0u: goto label_1b58f0;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b58fcu: goto label_1b58fc;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5908u: goto label_1b5908;
        case 0x1b590cu: goto label_1b590c;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b5914u: goto label_1b5914;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b591cu: goto label_1b591c;
        case 0x1b5920u: goto label_1b5920;
        default: break;
    }

    ctx->pc = 0x1b58e0u;

label_1b58e0:
    // 0x1b58e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b58e4:
    // 0x1b58e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b58e8:
    // 0x1b58e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b58e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b58ec:
    // 0x1b58ec: 0x24426a50  addiu       $v0, $v0, 0x6A50
    ctx->pc = 0x1b58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
label_1b58f0:
    // 0x1b58f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b58f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b58f4:
    // 0x1b58f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b58f8:
    // 0x1b58f8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1b58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1b58fc:
    // 0x1b58fc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1b58fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b5900:
    // 0x1b5900: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x1b5900u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b5904:
    // 0x1b5904: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x1b5904u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b5908:
    // 0x1b5908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b590c:
    // 0x1b590c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b590cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b5910:
    // 0x1b5910: 0x320f809  jalr        $t9
label_1b5914:
    if (ctx->pc == 0x1B5914u) {
        ctx->pc = 0x1B5918u;
        goto label_1b5918;
    }
    ctx->pc = 0x1B5910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5918u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5918u; }
            if (ctx->pc != 0x1B5918u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5918u;
label_1b5918:
    // 0x1b5918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b591c:
    // 0x1b591c: 0x3e00008  jr          $ra
label_1b5920:
    if (ctx->pc == 0x1B5920u) {
        ctx->pc = 0x1B5920u;
            // 0x1b5920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B5924u;
        goto label_fallthrough_0x1b591c;
    }
    ctx->pc = 0x1B591Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B591Cu;
            // 0x1b5920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b591c:
    ctx->pc = 0x1B5924u;
}
