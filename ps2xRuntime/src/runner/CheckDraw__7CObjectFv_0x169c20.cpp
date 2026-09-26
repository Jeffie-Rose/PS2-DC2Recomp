#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDraw__7CObjectFv
// Address: 0x169c20 - 0x169d10
void CheckDraw__7CObjectFv_0x169c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDraw__7CObjectFv_0x169c20");
#endif

    switch (ctx->pc) {
        case 0x169c20u: goto label_169c20;
        case 0x169c24u: goto label_169c24;
        case 0x169c28u: goto label_169c28;
        case 0x169c2cu: goto label_169c2c;
        case 0x169c30u: goto label_169c30;
        case 0x169c34u: goto label_169c34;
        case 0x169c38u: goto label_169c38;
        case 0x169c3cu: goto label_169c3c;
        case 0x169c40u: goto label_169c40;
        case 0x169c44u: goto label_169c44;
        case 0x169c48u: goto label_169c48;
        case 0x169c4cu: goto label_169c4c;
        case 0x169c50u: goto label_169c50;
        case 0x169c54u: goto label_169c54;
        case 0x169c58u: goto label_169c58;
        case 0x169c5cu: goto label_169c5c;
        case 0x169c60u: goto label_169c60;
        case 0x169c64u: goto label_169c64;
        case 0x169c68u: goto label_169c68;
        case 0x169c6cu: goto label_169c6c;
        case 0x169c70u: goto label_169c70;
        case 0x169c74u: goto label_169c74;
        case 0x169c78u: goto label_169c78;
        case 0x169c7cu: goto label_169c7c;
        case 0x169c80u: goto label_169c80;
        case 0x169c84u: goto label_169c84;
        case 0x169c88u: goto label_169c88;
        case 0x169c8cu: goto label_169c8c;
        case 0x169c90u: goto label_169c90;
        case 0x169c94u: goto label_169c94;
        case 0x169c98u: goto label_169c98;
        case 0x169c9cu: goto label_169c9c;
        case 0x169ca0u: goto label_169ca0;
        case 0x169ca4u: goto label_169ca4;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cacu: goto label_169cac;
        case 0x169cb0u: goto label_169cb0;
        case 0x169cb4u: goto label_169cb4;
        case 0x169cb8u: goto label_169cb8;
        case 0x169cbcu: goto label_169cbc;
        case 0x169cc0u: goto label_169cc0;
        case 0x169cc4u: goto label_169cc4;
        case 0x169cc8u: goto label_169cc8;
        case 0x169cccu: goto label_169ccc;
        case 0x169cd0u: goto label_169cd0;
        case 0x169cd4u: goto label_169cd4;
        case 0x169cd8u: goto label_169cd8;
        case 0x169cdcu: goto label_169cdc;
        case 0x169ce0u: goto label_169ce0;
        case 0x169ce4u: goto label_169ce4;
        case 0x169ce8u: goto label_169ce8;
        case 0x169cecu: goto label_169cec;
        case 0x169cf0u: goto label_169cf0;
        case 0x169cf4u: goto label_169cf4;
        case 0x169cf8u: goto label_169cf8;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d00u: goto label_169d00;
        case 0x169d04u: goto label_169d04;
        case 0x169d08u: goto label_169d08;
        case 0x169d0cu: goto label_169d0c;
        default: break;
    }

    ctx->pc = 0x169c20u;

label_169c20:
    // 0x169c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169c24:
    // 0x169c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169c28:
    // 0x169c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169c2c:
    // 0x169c2c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_169c30:
    // 0x169c30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_169c34:
    if (ctx->pc == 0x169C34u) {
        ctx->pc = 0x169C34u;
            // 0x169c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169C38u;
        goto label_169c38;
    }
    ctx->pc = 0x169C30u;
    {
        const bool branch_taken_0x169c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C30u;
            // 0x169c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c30) {
            ctx->pc = 0x169C60u;
            goto label_169c60;
        }
    }
    ctx->pc = 0x169C38u;
label_169c38:
    // 0x169c38: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x169c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_169c3c:
    // 0x169c3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169c40:
    // 0x169c40: 0x0  nop
    ctx->pc = 0x169c40u;
    // NOP
label_169c44:
    // 0x169c44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x169c44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169c48:
    // 0x169c48: 0x0  nop
    ctx->pc = 0x169c48u;
    // NOP
label_169c4c:
    // 0x169c4c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_169c50:
    if (ctx->pc == 0x169C50u) {
        ctx->pc = 0x169C50u;
            // 0x169c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x169C54u;
        goto label_169c54;
    }
    ctx->pc = 0x169C4Cu;
    {
        const bool branch_taken_0x169c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x169C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C4Cu;
            // 0x169c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c4c) {
            ctx->pc = 0x169D00u;
            goto label_169d00;
        }
    }
    ctx->pc = 0x169C54u;
label_169c54:
    // 0x169c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169c58:
    // 0x169c58: 0x1000002a  b           . + 4 + (0x2A << 2)
label_169c5c:
    if (ctx->pc == 0x169C5Cu) {
        ctx->pc = 0x169C5Cu;
            // 0x169c5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x169C60u;
        goto label_169c60;
    }
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C58u;
            // 0x169c5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c58) {
            ctx->pc = 0x169D04u;
            goto label_169d04;
        }
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_169c64:
    // 0x169c64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_169c68:
    if (ctx->pc == 0x169C68u) {
        ctx->pc = 0x169C68u;
            // 0x169c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169C6Cu;
        goto label_169c6c;
    }
    ctx->pc = 0x169C64u;
    {
        const bool branch_taken_0x169c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C64u;
            // 0x169c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c64) {
            ctx->pc = 0x169C7Cu;
            goto label_169c7c;
        }
    }
    ctx->pc = 0x169C6Cu;
label_169c6c:
    // 0x169c6c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_169c70:
    // 0x169c70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_169c74:
    if (ctx->pc == 0x169C74u) {
        ctx->pc = 0x169C78u;
        goto label_169c78;
    }
    ctx->pc = 0x169C70u;
    {
        const bool branch_taken_0x169c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c70) {
            ctx->pc = 0x169C84u;
            goto label_169c84;
        }
    }
    ctx->pc = 0x169C78u;
label_169c78:
    // 0x169c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169c7c:
    // 0x169c7c: 0x10000020  b           . + 4 + (0x20 << 2)
label_169c80:
    if (ctx->pc == 0x169C80u) {
        ctx->pc = 0x169C84u;
        goto label_169c84;
    }
    ctx->pc = 0x169C7Cu;
    {
        const bool branch_taken_0x169c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c7c) {
            ctx->pc = 0x169D00u;
            goto label_169d00;
        }
    }
    ctx->pc = 0x169C84u;
label_169c84:
    // 0x169c84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169c88:
    // 0x169c88: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_169c8c:
    // 0x169c8c: 0x320f809  jalr        $t9
label_169c90:
    if (ctx->pc == 0x169C90u) {
        ctx->pc = 0x169C94u;
        goto label_169c94;
    }
    ctx->pc = 0x169C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x169C94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169C94u; }
            if (ctx->pc != 0x169C94u) { return; }
        }
        }
    }
    ctx->pc = 0x169C94u;
label_169c94:
    // 0x169c94: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x169c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_169c98:
    // 0x169c98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x169c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_169c9c:
    // 0x169c9c: 0x0  nop
    ctx->pc = 0x169c9cu;
    // NOP
label_169ca0:
    // 0x169ca0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x169ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169ca4:
    // 0x169ca4: 0x0  nop
    ctx->pc = 0x169ca4u;
    // NOP
label_169ca8:
    // 0x169ca8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_169cac:
    if (ctx->pc == 0x169CACu) {
        ctx->pc = 0x169CB0u;
        goto label_169cb0;
    }
    ctx->pc = 0x169CA8u;
    {
        const bool branch_taken_0x169ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169ca8) {
            ctx->pc = 0x169CC8u;
            goto label_169cc8;
        }
    }
    ctx->pc = 0x169CB0u;
label_169cb0:
    // 0x169cb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x169cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169cb4:
    // 0x169cb4: 0x0  nop
    ctx->pc = 0x169cb4u;
    // NOP
label_169cb8:
    // 0x169cb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_169cbc:
    if (ctx->pc == 0x169CBCu) {
        ctx->pc = 0x169CC0u;
        goto label_169cc0;
    }
    ctx->pc = 0x169CB8u;
    {
        const bool branch_taken_0x169cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169cb8) {
            ctx->pc = 0x169CC8u;
            goto label_169cc8;
        }
    }
    ctx->pc = 0x169CC0u;
label_169cc0:
    // 0x169cc0: 0x1000000f  b           . + 4 + (0xF << 2)
label_169cc4:
    if (ctx->pc == 0x169CC4u) {
        ctx->pc = 0x169CC4u;
            // 0x169cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169CC8u;
        goto label_169cc8;
    }
    ctx->pc = 0x169CC0u;
    {
        const bool branch_taken_0x169cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169CC0u;
            // 0x169cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cc0) {
            ctx->pc = 0x169D00u;
            goto label_169d00;
        }
    }
    ctx->pc = 0x169CC8u;
label_169cc8:
    // 0x169cc8: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x169cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_169ccc:
    // 0x169ccc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_169cd0:
    // 0x169cd0: 0x0  nop
    ctx->pc = 0x169cd0u;
    // NOP
label_169cd4:
    // 0x169cd4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x169cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169cd8:
    // 0x169cd8: 0x0  nop
    ctx->pc = 0x169cd8u;
    // NOP
label_169cdc:
    // 0x169cdc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_169ce0:
    if (ctx->pc == 0x169CE0u) {
        ctx->pc = 0x169CE0u;
            // 0x169ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x169CE4u;
        goto label_169ce4;
    }
    ctx->pc = 0x169CDCu;
    {
        const bool branch_taken_0x169cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169CDCu;
            // 0x169ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cdc) {
            ctx->pc = 0x169D00u;
            goto label_169d00;
        }
    }
    ctx->pc = 0x169CE4u;
label_169ce4:
    // 0x169ce4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x169ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169ce8:
    // 0x169ce8: 0x0  nop
    ctx->pc = 0x169ce8u;
    // NOP
label_169cec:
    // 0x169cec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_169cf0:
    if (ctx->pc == 0x169CF0u) {
        ctx->pc = 0x169CF4u;
        goto label_169cf4;
    }
    ctx->pc = 0x169CECu;
    {
        const bool branch_taken_0x169cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169cec) {
            ctx->pc = 0x169CFCu;
            goto label_169cfc;
        }
    }
    ctx->pc = 0x169CF4u;
label_169cf4:
    // 0x169cf4: 0x10000002  b           . + 4 + (0x2 << 2)
label_169cf8:
    if (ctx->pc == 0x169CF8u) {
        ctx->pc = 0x169CF8u;
            // 0x169cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169CFCu;
        goto label_169cfc;
    }
    ctx->pc = 0x169CF4u;
    {
        const bool branch_taken_0x169cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169CF4u;
            // 0x169cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cf4) {
            ctx->pc = 0x169D00u;
            goto label_169d00;
        }
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169d00:
    // 0x169d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169d04:
    // 0x169d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169d08:
    // 0x169d08: 0x3e00008  jr          $ra
label_169d0c:
    if (ctx->pc == 0x169D0Cu) {
        ctx->pc = 0x169D0Cu;
            // 0x169d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x169D10u;
        goto label_fallthrough_0x169d08;
    }
    ctx->pc = 0x169D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D08u;
            // 0x169d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169d08:
    ctx->pc = 0x169D10u;
}
