#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__11CCharacter2Ffff
// Address: 0x1684d0 - 0x168514
void SetPosition__11CCharacter2Ffff_0x1684d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__11CCharacter2Ffff_0x1684d0");
#endif

    switch (ctx->pc) {
        case 0x1684d0u: goto label_1684d0;
        case 0x1684d4u: goto label_1684d4;
        case 0x1684d8u: goto label_1684d8;
        case 0x1684dcu: goto label_1684dc;
        case 0x1684e0u: goto label_1684e0;
        case 0x1684e4u: goto label_1684e4;
        case 0x1684e8u: goto label_1684e8;
        case 0x1684ecu: goto label_1684ec;
        case 0x1684f0u: goto label_1684f0;
        case 0x1684f4u: goto label_1684f4;
        case 0x1684f8u: goto label_1684f8;
        case 0x1684fcu: goto label_1684fc;
        case 0x168500u: goto label_168500;
        case 0x168504u: goto label_168504;
        case 0x168508u: goto label_168508;
        case 0x16850cu: goto label_16850c;
        case 0x168510u: goto label_168510;
        default: break;
    }

    ctx->pc = 0x1684d0u;

label_1684d0:
    // 0x1684d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1684d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1684d4:
    // 0x1684d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1684d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1684d8:
    // 0x1684d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1684d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1684dc:
    // 0x1684dc: 0x24424b60  addiu       $v0, $v0, 0x4B60
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19296));
label_1684e0:
    // 0x1684e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1684e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1684e4:
    // 0x1684e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1684e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1684e8:
    // 0x1684e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1684e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1684ec:
    // 0x1684ec: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1684ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1684f0:
    // 0x1684f0: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x1684f0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1684f4:
    // 0x1684f4: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x1684f4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1684f8:
    // 0x1684f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1684f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1684fc:
    // 0x1684fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_168500:
    // 0x168500: 0x320f809  jalr        $t9
label_168504:
    if (ctx->pc == 0x168504u) {
        ctx->pc = 0x168508u;
        goto label_168508;
    }
    ctx->pc = 0x168500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168508u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x168508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168508u; }
            if (ctx->pc != 0x168508u) { return; }
        }
        }
    }
    ctx->pc = 0x168508u;
label_168508:
    // 0x168508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16850c:
    // 0x16850c: 0x3e00008  jr          $ra
label_168510:
    if (ctx->pc == 0x168510u) {
        ctx->pc = 0x168510u;
            // 0x168510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x168514u;
        goto label_fallthrough_0x16850c;
    }
    ctx->pc = 0x16850Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16850Cu;
            // 0x168510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16850c:
    ctx->pc = 0x168514u;
}
