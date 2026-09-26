#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BLOW_ANGLE__FP12RS_STACKDATAi
// Address: 0x2ced50 - 0x2cedb0
void ps2__SET_BLOW_ANGLE__FP12RS_STACKDATAi_0x2ced50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BLOW_ANGLE__FP12RS_STACKDATAi_0x2ced50");
#endif

    switch (ctx->pc) {
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced54u: goto label_2ced54;
        case 0x2ced58u: goto label_2ced58;
        case 0x2ced5cu: goto label_2ced5c;
        case 0x2ced60u: goto label_2ced60;
        case 0x2ced64u: goto label_2ced64;
        case 0x2ced68u: goto label_2ced68;
        case 0x2ced6cu: goto label_2ced6c;
        case 0x2ced70u: goto label_2ced70;
        case 0x2ced74u: goto label_2ced74;
        case 0x2ced78u: goto label_2ced78;
        case 0x2ced7cu: goto label_2ced7c;
        case 0x2ced80u: goto label_2ced80;
        case 0x2ced84u: goto label_2ced84;
        case 0x2ced88u: goto label_2ced88;
        case 0x2ced8cu: goto label_2ced8c;
        case 0x2ced90u: goto label_2ced90;
        case 0x2ced94u: goto label_2ced94;
        case 0x2ced98u: goto label_2ced98;
        case 0x2ced9cu: goto label_2ced9c;
        case 0x2ceda0u: goto label_2ceda0;
        case 0x2ceda4u: goto label_2ceda4;
        case 0x2ceda8u: goto label_2ceda8;
        case 0x2cedacu: goto label_2cedac;
        default: break;
    }

    ctx->pc = 0x2ced50u;

label_2ced50:
    // 0x2ced50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ced54:
    // 0x2ced54: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2ced58:
    if (ctx->pc == 0x2CED58u) {
        ctx->pc = 0x2CED58u;
            // 0x2ced58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2CED5Cu;
        goto label_2ced5c;
    }
    ctx->pc = 0x2CED54u;
    {
        const bool branch_taken_0x2ced54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED54u;
            // 0x2ced58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced54) {
            ctx->pc = 0x2CED64u;
            goto label_2ced64;
        }
    }
    ctx->pc = 0x2CED5Cu;
label_2ced5c:
    // 0x2ced5c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2ced60:
    if (ctx->pc == 0x2CED60u) {
        ctx->pc = 0x2CED60u;
            // 0x2ced60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED64u;
        goto label_2ced64;
    }
    ctx->pc = 0x2CED5Cu;
    {
        const bool branch_taken_0x2ced5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED5Cu;
            // 0x2ced60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced5c) {
            ctx->pc = 0x2CEDA4u;
            goto label_2ceda4;
        }
    }
    ctx->pc = 0x2CED64u;
label_2ced64:
    // 0x2ced64: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ced64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2ced68:
    // 0x2ced68: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ced68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2ced6c:
    // 0x2ced6c: 0xc4410f40  lwc1        $f1, 0xF40($v0)
    ctx->pc = 0x2ced6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ced70:
    // 0x2ced70: 0xc4400f48  lwc1        $f0, 0xF48($v0)
    ctx->pc = 0x2ced70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ced74:
    // 0x2ced74: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x2ced74u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
label_2ced78:
    // 0x2ced78: 0xc047c76  jal         func_11F1D8
label_2ced7c:
    if (ctx->pc == 0x2CED7Cu) {
        ctx->pc = 0x2CED7Cu;
            // 0x2ced7c: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x2CED80u;
        goto label_2ced80;
    }
    ctx->pc = 0x2CED78u;
    SET_GPR_U32(ctx, 31, 0x2CED80u);
    ctx->pc = 0x2CED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED78u;
            // 0x2ced7c: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED80u; }
        if (ctx->pc != 0x2CED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED80u; }
        if (ctx->pc != 0x2CED80u) { return; }
    }
    ctx->pc = 0x2CED80u;
label_2ced80:
    // 0x2ced80: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ced80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2ced84:
    // 0x2ced84: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2ced84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2ced88:
    // 0x2ced88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ced88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ced8c:
    // 0x2ced8c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ced8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2ced90:
    // 0x2ced90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ced90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ced94:
    // 0x2ced94: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2ced94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2ced98:
    // 0x2ced98: 0x320f809  jalr        $t9
label_2ced9c:
    if (ctx->pc == 0x2CED9Cu) {
        ctx->pc = 0x2CED9Cu;
            // 0x2ced9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2CEDA0u;
        goto label_2ceda0;
    }
    ctx->pc = 0x2CED98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CEDA0u);
        ctx->pc = 0x2CED9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED98u;
            // 0x2ced9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CEDA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDA0u; }
            if (ctx->pc != 0x2CEDA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CEDA0u;
label_2ceda0:
    // 0x2ceda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ceda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceda4:
    // 0x2ceda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ceda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ceda8:
    // 0x2ceda8: 0x3e00008  jr          $ra
label_2cedac:
    if (ctx->pc == 0x2CEDACu) {
        ctx->pc = 0x2CEDACu;
            // 0x2cedac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CEDB0u;
        goto label_fallthrough_0x2ceda8;
    }
    ctx->pc = 0x2CEDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDA8u;
            // 0x2cedac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ceda8:
    ctx->pc = 0x2CEDB0u;
}
