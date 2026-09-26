#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CFragmentFPff
// Address: 0x2cbdd0 - 0x2cbe5c
void Draw__9CFragmentFPff_0x2cbdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CFragmentFPff_0x2cbdd0");
#endif

    switch (ctx->pc) {
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbdd4u: goto label_2cbdd4;
        case 0x2cbdd8u: goto label_2cbdd8;
        case 0x2cbddcu: goto label_2cbddc;
        case 0x2cbde0u: goto label_2cbde0;
        case 0x2cbde4u: goto label_2cbde4;
        case 0x2cbde8u: goto label_2cbde8;
        case 0x2cbdecu: goto label_2cbdec;
        case 0x2cbdf0u: goto label_2cbdf0;
        case 0x2cbdf4u: goto label_2cbdf4;
        case 0x2cbdf8u: goto label_2cbdf8;
        case 0x2cbdfcu: goto label_2cbdfc;
        case 0x2cbe00u: goto label_2cbe00;
        case 0x2cbe04u: goto label_2cbe04;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe0cu: goto label_2cbe0c;
        case 0x2cbe10u: goto label_2cbe10;
        case 0x2cbe14u: goto label_2cbe14;
        case 0x2cbe18u: goto label_2cbe18;
        case 0x2cbe1cu: goto label_2cbe1c;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbe24u: goto label_2cbe24;
        case 0x2cbe28u: goto label_2cbe28;
        case 0x2cbe2cu: goto label_2cbe2c;
        case 0x2cbe30u: goto label_2cbe30;
        case 0x2cbe34u: goto label_2cbe34;
        case 0x2cbe38u: goto label_2cbe38;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe40u: goto label_2cbe40;
        case 0x2cbe44u: goto label_2cbe44;
        case 0x2cbe48u: goto label_2cbe48;
        case 0x2cbe4cu: goto label_2cbe4c;
        case 0x2cbe50u: goto label_2cbe50;
        case 0x2cbe54u: goto label_2cbe54;
        case 0x2cbe58u: goto label_2cbe58;
        default: break;
    }

    ctx->pc = 0x2cbdd0u;

label_2cbdd0:
    // 0x2cbdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cbdd4:
    // 0x2cbdd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2cbdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdd8:
    // 0x2cbdd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cbddc:
    // 0x2cbddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cbde0:
    // 0x2cbde0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2cbde4:
    // 0x2cbde4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2cbde8:
    if (ctx->pc == 0x2CBDE8u) {
        ctx->pc = 0x2CBDE8u;
            // 0x2cbde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDECu;
        goto label_2cbdec;
    }
    ctx->pc = 0x2CBDE4u;
    {
        const bool branch_taken_0x2cbde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDE4u;
            // 0x2cbde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbde4) {
            ctx->pc = 0x2CBE4Cu;
            goto label_2cbe4c;
        }
    }
    ctx->pc = 0x2CBDECu;
label_2cbdec:
    // 0x2cbdec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2cbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2cbdf0:
    // 0x2cbdf0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2cbdf4:
    if (ctx->pc == 0x2CBDF4u) {
        ctx->pc = 0x2CBDF8u;
        goto label_2cbdf8;
    }
    ctx->pc = 0x2CBDF0u;
    {
        const bool branch_taken_0x2cbdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbdf0) {
            ctx->pc = 0x2CBE4Cu;
            goto label_2cbe4c;
        }
    }
    ctx->pc = 0x2CBDF8u;
label_2cbdf8:
    // 0x2cbdf8: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x2cbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2cbdfc:
    // 0x2cbdfc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cbe00:
    if (ctx->pc == 0x2CBE00u) {
        ctx->pc = 0x2CBE00u;
            // 0x2cbe00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CBE04u;
        goto label_2cbe04;
    }
    ctx->pc = 0x2CBDFCu;
    {
        const bool branch_taken_0x2cbdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDFCu;
            // 0x2cbe00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdfc) {
            ctx->pc = 0x2CBE1Cu;
            goto label_2cbe1c;
        }
    }
    ctx->pc = 0x2CBE04u;
label_2cbe04:
    // 0x2cbe04: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2cbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2cbe08:
    // 0x2cbe08: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2cbe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2cbe0c:
    // 0x2cbe0c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2cbe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2cbe10:
    // 0x2cbe10: 0xe46c0044  swc1        $f12, 0x44($v1)
    ctx->pc = 0x2cbe10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_2cbe14:
    // 0x2cbe14: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2cbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2cbe18:
    // 0x2cbe18: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x2cbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_2cbe1c:
    // 0x2cbe1c: 0xc041c3e  jal         func_1070F8
label_2cbe20:
    if (ctx->pc == 0x2CBE20u) {
        ctx->pc = 0x2CBE20u;
            // 0x2cbe20: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2CBE24u;
        goto label_2cbe24;
    }
    ctx->pc = 0x2CBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE24u);
    ctx->pc = 0x2CBE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE1Cu;
            // 0x2cbe20: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE24u; }
        if (ctx->pc != 0x2CBE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE24u; }
        if (ctx->pc != 0x2CBE24u) { return; }
    }
    ctx->pc = 0x2CBE24u;
label_2cbe24:
    // 0x2cbe24: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2cbe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2cbe28:
    // 0x2cbe28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cbe28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cbe2c:
    // 0x2cbe2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cbe2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cbe30:
    // 0x2cbe30: 0x320f809  jalr        $t9
label_2cbe34:
    if (ctx->pc == 0x2CBE34u) {
        ctx->pc = 0x2CBE34u;
            // 0x2cbe34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CBE38u;
        goto label_2cbe38;
    }
    ctx->pc = 0x2CBE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBE38u);
        ctx->pc = 0x2CBE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE30u;
            // 0x2cbe34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBE38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE38u; }
            if (ctx->pc != 0x2CBE38u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBE38u;
label_2cbe38:
    // 0x2cbe38: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2cbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2cbe3c:
    // 0x2cbe3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cbe3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cbe40:
    // 0x2cbe40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2cbe40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2cbe44:
    // 0x2cbe44: 0x320f809  jalr        $t9
label_2cbe48:
    if (ctx->pc == 0x2CBE48u) {
        ctx->pc = 0x2CBE48u;
            // 0x2cbe48: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x2CBE4Cu;
        goto label_2cbe4c;
    }
    ctx->pc = 0x2CBE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBE4Cu);
        ctx->pc = 0x2CBE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE44u;
            // 0x2cbe48: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE4Cu; }
            if (ctx->pc != 0x2CBE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CBE4Cu;
label_2cbe4c:
    // 0x2cbe4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbe50:
    // 0x2cbe50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbe54:
    // 0x2cbe54: 0x3e00008  jr          $ra
label_2cbe58:
    if (ctx->pc == 0x2CBE58u) {
        ctx->pc = 0x2CBE58u;
            // 0x2cbe58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CBE5Cu;
        goto label_fallthrough_0x2cbe54;
    }
    ctx->pc = 0x2CBE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE54u;
            // 0x2cbe58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cbe54:
    ctx->pc = 0x2CBE5Cu;
}
