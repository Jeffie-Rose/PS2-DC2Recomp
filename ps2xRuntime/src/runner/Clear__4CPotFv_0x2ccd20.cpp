#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__4CPotFv
// Address: 0x2ccd20 - 0x2ccda0
void Clear__4CPotFv_0x2ccd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__4CPotFv_0x2ccd20");
#endif

    switch (ctx->pc) {
        case 0x2ccd20u: goto label_2ccd20;
        case 0x2ccd24u: goto label_2ccd24;
        case 0x2ccd28u: goto label_2ccd28;
        case 0x2ccd2cu: goto label_2ccd2c;
        case 0x2ccd30u: goto label_2ccd30;
        case 0x2ccd34u: goto label_2ccd34;
        case 0x2ccd38u: goto label_2ccd38;
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd40u: goto label_2ccd40;
        case 0x2ccd44u: goto label_2ccd44;
        case 0x2ccd48u: goto label_2ccd48;
        case 0x2ccd4cu: goto label_2ccd4c;
        case 0x2ccd50u: goto label_2ccd50;
        case 0x2ccd54u: goto label_2ccd54;
        case 0x2ccd58u: goto label_2ccd58;
        case 0x2ccd5cu: goto label_2ccd5c;
        case 0x2ccd60u: goto label_2ccd60;
        case 0x2ccd64u: goto label_2ccd64;
        case 0x2ccd68u: goto label_2ccd68;
        case 0x2ccd6cu: goto label_2ccd6c;
        case 0x2ccd70u: goto label_2ccd70;
        case 0x2ccd74u: goto label_2ccd74;
        case 0x2ccd78u: goto label_2ccd78;
        case 0x2ccd7cu: goto label_2ccd7c;
        case 0x2ccd80u: goto label_2ccd80;
        case 0x2ccd84u: goto label_2ccd84;
        case 0x2ccd88u: goto label_2ccd88;
        case 0x2ccd8cu: goto label_2ccd8c;
        case 0x2ccd90u: goto label_2ccd90;
        case 0x2ccd94u: goto label_2ccd94;
        case 0x2ccd98u: goto label_2ccd98;
        case 0x2ccd9cu: goto label_2ccd9c;
        default: break;
    }

    ctx->pc = 0x2ccd20u;

label_2ccd20:
    // 0x2ccd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ccd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ccd24:
    // 0x2ccd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ccd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ccd28:
    // 0x2ccd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ccd2c:
    // 0x2ccd2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ccd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ccd30:
    // 0x2ccd30: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2ccd34:
    if (ctx->pc == 0x2CCD34u) {
        ctx->pc = 0x2CCD34u;
            // 0x2ccd34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD38u;
        goto label_2ccd38;
    }
    ctx->pc = 0x2CCD30u;
    {
        const bool branch_taken_0x2ccd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD30u;
            // 0x2ccd34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd30) {
            ctx->pc = 0x2CCD90u;
            goto label_2ccd90;
        }
    }
    ctx->pc = 0x2CCD38u;
label_2ccd38:
    // 0x2ccd38: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2ccd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_2ccd3c:
    // 0x2ccd3c: 0xc041c5c  jal         func_107170
label_2ccd40:
    if (ctx->pc == 0x2CCD40u) {
        ctx->pc = 0x2CCD40u;
            // 0x2ccd40: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2CCD44u;
        goto label_2ccd44;
    }
    ctx->pc = 0x2CCD3Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD44u);
    ctx->pc = 0x2CCD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD3Cu;
            // 0x2ccd40: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD44u; }
        if (ctx->pc != 0x2CCD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD44u; }
        if (ctx->pc != 0x2CCD44u) { return; }
    }
    ctx->pc = 0x2CCD44u;
label_2ccd44:
    // 0x2ccd44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ccd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ccd48:
    // 0x2ccd48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccd4c:
    // 0x2ccd4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ccd50:
    // 0x2ccd50: 0x320f809  jalr        $t9
label_2ccd54:
    if (ctx->pc == 0x2CCD54u) {
        ctx->pc = 0x2CCD54u;
            // 0x2ccd54: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CCD58u;
        goto label_2ccd58;
    }
    ctx->pc = 0x2CCD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCD58u);
        ctx->pc = 0x2CCD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD50u;
            // 0x2ccd54: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCD58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD58u; }
            if (ctx->pc != 0x2CCD58u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCD58u;
label_2ccd58:
    // 0x2ccd58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2ccd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccd5c:
    // 0x2ccd5c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2ccd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_2ccd60:
    // 0x2ccd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ccd64:
    // 0x2ccd64: 0x0  nop
    ctx->pc = 0x2ccd64u;
    // NOP
label_2ccd68:
    // 0x2ccd68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ccd68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ccd6c:
    // 0x2ccd6c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2ccd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2ccd70:
    // 0x2ccd70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ccd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ccd74:
    // 0x2ccd74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccd74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccd78:
    // 0x2ccd78: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ccd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ccd7c:
    // 0x2ccd7c: 0x320f809  jalr        $t9
label_2ccd80:
    if (ctx->pc == 0x2CCD80u) {
        ctx->pc = 0x2CCD80u;
            // 0x2ccd80: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CCD84u;
        goto label_2ccd84;
    }
    ctx->pc = 0x2CCD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCD84u);
        ctx->pc = 0x2CCD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD7Cu;
            // 0x2ccd80: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCD84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD84u; }
            if (ctx->pc != 0x2CCD84u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCD84u;
label_2ccd84:
    // 0x2ccd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ccd88:
    // 0x2ccd88: 0xc0b3414  jal         func_2CD050
label_2ccd8c:
    if (ctx->pc == 0x2CCD8Cu) {
        ctx->pc = 0x2CCD8Cu;
            // 0x2ccd8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CCD90u;
        goto label_2ccd90;
    }
    ctx->pc = 0x2CCD88u;
    SET_GPR_U32(ctx, 31, 0x2CCD90u);
    ctx->pc = 0x2CCD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD88u;
            // 0x2ccd8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD90u; }
        if (ctx->pc != 0x2CCD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD90u; }
        if (ctx->pc != 0x2CCD90u) { return; }
    }
    ctx->pc = 0x2CCD90u;
label_2ccd90:
    // 0x2ccd90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ccd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ccd94:
    // 0x2ccd94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ccd98:
    // 0x2ccd98: 0x3e00008  jr          $ra
label_2ccd9c:
    if (ctx->pc == 0x2CCD9Cu) {
        ctx->pc = 0x2CCD9Cu;
            // 0x2ccd9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CCDA0u;
        goto label_fallthrough_0x2ccd98;
    }
    ctx->pc = 0x2CCD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD98u;
            // 0x2ccd9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ccd98:
    ctx->pc = 0x2CCDA0u;
}
