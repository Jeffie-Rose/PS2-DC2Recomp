#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNowFrameWeight__11CCharacter2Ff
// Address: 0x1739b0 - 0x173a38
void SetNowFrameWeight__11CCharacter2Ff_0x1739b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNowFrameWeight__11CCharacter2Ff_0x1739b0");
#endif

    switch (ctx->pc) {
        case 0x1739b0u: goto label_1739b0;
        case 0x1739b4u: goto label_1739b4;
        case 0x1739b8u: goto label_1739b8;
        case 0x1739bcu: goto label_1739bc;
        case 0x1739c0u: goto label_1739c0;
        case 0x1739c4u: goto label_1739c4;
        case 0x1739c8u: goto label_1739c8;
        case 0x1739ccu: goto label_1739cc;
        case 0x1739d0u: goto label_1739d0;
        case 0x1739d4u: goto label_1739d4;
        case 0x1739d8u: goto label_1739d8;
        case 0x1739dcu: goto label_1739dc;
        case 0x1739e0u: goto label_1739e0;
        case 0x1739e4u: goto label_1739e4;
        case 0x1739e8u: goto label_1739e8;
        case 0x1739ecu: goto label_1739ec;
        case 0x1739f0u: goto label_1739f0;
        case 0x1739f4u: goto label_1739f4;
        case 0x1739f8u: goto label_1739f8;
        case 0x1739fcu: goto label_1739fc;
        case 0x173a00u: goto label_173a00;
        case 0x173a04u: goto label_173a04;
        case 0x173a08u: goto label_173a08;
        case 0x173a0cu: goto label_173a0c;
        case 0x173a10u: goto label_173a10;
        case 0x173a14u: goto label_173a14;
        case 0x173a18u: goto label_173a18;
        case 0x173a1cu: goto label_173a1c;
        case 0x173a20u: goto label_173a20;
        case 0x173a24u: goto label_173a24;
        case 0x173a28u: goto label_173a28;
        case 0x173a2cu: goto label_173a2c;
        case 0x173a30u: goto label_173a30;
        case 0x173a34u: goto label_173a34;
        default: break;
    }

    ctx->pc = 0x1739b0u;

label_1739b0:
    // 0x1739b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1739b4:
    // 0x1739b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1739b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1739b8:
    // 0x1739b8: 0x8c830374  lw          $v1, 0x374($a0)
    ctx->pc = 0x1739b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
label_1739bc:
    // 0x1739bc: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1739c0:
    if (ctx->pc == 0x1739C0u) {
        ctx->pc = 0x1739C4u;
        goto label_1739c4;
    }
    ctx->pc = 0x1739BCu;
    {
        const bool branch_taken_0x1739bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1739bc) {
            ctx->pc = 0x173A2Cu;
            goto label_173a2c;
        }
    }
    ctx->pc = 0x1739C4u;
label_1739c4:
    // 0x1739c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1739c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1739c8:
    // 0x1739c8: 0x0  nop
    ctx->pc = 0x1739c8u;
    // NOP
label_1739cc:
    // 0x1739cc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1739ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1739d0:
    // 0x1739d0: 0x0  nop
    ctx->pc = 0x1739d0u;
    // NOP
label_1739d4:
    // 0x1739d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1739d8:
    if (ctx->pc == 0x1739D8u) {
        ctx->pc = 0x1739D8u;
            // 0x1739d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1739DCu;
        goto label_1739dc;
    }
    ctx->pc = 0x1739D4u;
    {
        const bool branch_taken_0x1739d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1739D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1739D4u;
            // 0x1739d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739d4) {
            ctx->pc = 0x1739E0u;
            goto label_1739e0;
        }
    }
    ctx->pc = 0x1739DCu;
label_1739dc:
    // 0x1739dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1739dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1739e0:
    // 0x1739e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1739e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1739e4:
    // 0x1739e4: 0x0  nop
    ctx->pc = 0x1739e4u;
    // NOP
label_1739e8:
    // 0x1739e8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1739e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1739ec:
    // 0x1739ec: 0x0  nop
    ctx->pc = 0x1739ecu;
    // NOP
label_1739f0:
    // 0x1739f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1739f4:
    if (ctx->pc == 0x1739F4u) {
        ctx->pc = 0x1739F8u;
        goto label_1739f8;
    }
    ctx->pc = 0x1739F0u;
    {
        const bool branch_taken_0x1739f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1739f0) {
            ctx->pc = 0x1739FCu;
            goto label_1739fc;
        }
    }
    ctx->pc = 0x1739F8u;
label_1739f8:
    // 0x1739f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1739f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1739fc:
    // 0x1739fc: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1739fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_173a00:
    // 0x173a00: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_173a04:
    // 0x173a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173a08:
    // 0x173a08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x173a08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173a0c:
    // 0x173a0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x173a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_173a10:
    // 0x173a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173a14:
    // 0x173a14: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x173a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_173a18:
    // 0x173a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_173a1c:
    // 0x173a1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x173a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_173a20:
    // 0x173a20: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x173a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_173a24:
    // 0x173a24: 0x320f809  jalr        $t9
label_173a28:
    if (ctx->pc == 0x173A28u) {
        ctx->pc = 0x173A28u;
            // 0x173a28: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x173A2Cu;
        goto label_173a2c;
    }
    ctx->pc = 0x173A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173A2Cu);
        ctx->pc = 0x173A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A24u;
            // 0x173a28: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173A2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173A2Cu; }
            if (ctx->pc != 0x173A2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x173A2Cu;
label_173a2c:
    // 0x173a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173a30:
    // 0x173a30: 0x3e00008  jr          $ra
label_173a34:
    if (ctx->pc == 0x173A34u) {
        ctx->pc = 0x173A34u;
            // 0x173a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x173A38u;
        goto label_fallthrough_0x173a30;
    }
    ctx->pc = 0x173A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A30u;
            // 0x173a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x173a30:
    ctx->pc = 0x173A38u;
}
