#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MyTextureMake_sub__6ClsMesFv
// Address: 0x153ef0 - 0x154150
void MyTextureMake_sub__6ClsMesFv_0x153ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MyTextureMake_sub__6ClsMesFv_0x153ef0");
#endif

    switch (ctx->pc) {
        case 0x153f88u: goto label_153f88;
        case 0x153fbcu: goto label_153fbc;
        case 0x153fe8u: goto label_153fe8;
        case 0x154058u: goto label_154058;
        case 0x15407cu: goto label_15407c;
        default: break;
    }

    ctx->pc = 0x153ef0u;

    // 0x153ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x153ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153f00: 0x8c9001d4  lw          $s0, 0x1D4($a0)
    ctx->pc = 0x153f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x153f04: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x153f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153f08: 0xac8201d4  sw          $v0, 0x1D4($a0)
    ctx->pc = 0x153f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    // 0x153f0c: 0x8c821b1c  lw          $v0, 0x1B1C($a0)
    ctx->pc = 0x153f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6940)));
    // 0x153f10: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x153F10u;
    {
        const bool branch_taken_0x153f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F10u;
            // 0x153f14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f10) {
            ctx->pc = 0x153FF4u;
            goto label_153ff4;
        }
    }
    ctx->pc = 0x153F18u;
    // 0x153f18: 0xc62101b8  lwc1        $f1, 0x1B8($s1)
    ctx->pc = 0x153f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f20: 0x0  nop
    ctx->pc = 0x153f20u;
    // NOP
    // 0x153f24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x153f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f28: 0x0  nop
    ctx->pc = 0x153f28u;
    // NOP
    // 0x153f2c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x153F2Cu;
    {
        const bool branch_taken_0x153f2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F2Cu;
            // 0x153f30: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f2c) {
            ctx->pc = 0x153FF8u;
            goto label_153ff8;
        }
    }
    ctx->pc = 0x153F34u;
    // 0x153f34: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x153f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x153f38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153f3c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x153f3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153f40: 0x0  nop
    ctx->pc = 0x153f40u;
    // NOP
    // 0x153f44: 0x0  nop
    ctx->pc = 0x153f44u;
    // NOP
    // 0x153f48: 0x1010  mfhi        $v0
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x153f4c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x153F4Cu;
    {
        const bool branch_taken_0x153f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153f4c) {
            ctx->pc = 0x153FF4u;
            goto label_153ff4;
        }
    }
    ctx->pc = 0x153F54u;
    // 0x153f54: 0x8e231b20  lw          $v1, 0x1B20($s1)
    ctx->pc = 0x153f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6944)));
    // 0x153f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153f5c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x153F5Cu;
    {
        const bool branch_taken_0x153f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F5Cu;
            // 0x153f60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f5c) {
            ctx->pc = 0x153F90u;
            goto label_153f90;
        }
    }
    ctx->pc = 0x153F64u;
    // 0x153f64: 0x8e221b24  lw          $v0, 0x1B24($s1)
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6948)));
    // 0x153f68: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153F68u;
    {
        const bool branch_taken_0x153f68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F68u;
            // 0x153f6c: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f68) {
            ctx->pc = 0x153F7Cu;
            goto label_153f7c;
        }
    }
    ctx->pc = 0x153F70u;
    // 0x153f70: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x153F70u;
    {
        const bool branch_taken_0x153f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f70) {
            ctx->pc = 0x153F7Cu;
            goto label_153f7c;
        }
    }
    ctx->pc = 0x153F78u;
    // 0x153f78: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x153f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_153f7c:
    // 0x153f7c: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x153f80: 0xc063818  jal         func_18E060
    ctx->pc = 0x153F80u;
    SET_GPR_U32(ctx, 31, 0x153F88u);
    ctx->pc = 0x153F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153F80u;
            // 0x153f84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153F88u; }
        if (ctx->pc != 0x153F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153F88u; }
        if (ctx->pc != 0x153F88u) { return; }
    }
    ctx->pc = 0x153F88u;
label_153f88:
    // 0x153f88: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x153F88u;
    {
        const bool branch_taken_0x153f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F88u;
            // 0x153f8c: 0x8e221b24  lw          $v0, 0x1B24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f88) {
            ctx->pc = 0x153FECu;
            goto label_153fec;
        }
    }
    ctx->pc = 0x153F90u;
label_153f90:
    // 0x153f90: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x153F90u;
    {
        const bool branch_taken_0x153f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153f90) {
            ctx->pc = 0x153FC4u;
            goto label_153fc4;
        }
    }
    ctx->pc = 0x153F98u;
    // 0x153f98: 0x8e221b24  lw          $v0, 0x1B24($s1)
    ctx->pc = 0x153f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6948)));
    // 0x153f9c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153F9Cu;
    {
        const bool branch_taken_0x153f9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F9Cu;
            // 0x153fa0: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f9c) {
            ctx->pc = 0x153FB0u;
            goto label_153fb0;
        }
    }
    ctx->pc = 0x153FA4u;
    // 0x153fa4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x153FA4u;
    {
        const bool branch_taken_0x153fa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fa4) {
            ctx->pc = 0x153FB0u;
            goto label_153fb0;
        }
    }
    ctx->pc = 0x153FACu;
    // 0x153fac: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_153fb0:
    // 0x153fb0: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x153fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x153fb4: 0xc063818  jal         func_18E060
    ctx->pc = 0x153FB4u;
    SET_GPR_U32(ctx, 31, 0x153FBCu);
    ctx->pc = 0x153FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153FB4u;
            // 0x153fb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FBCu; }
        if (ctx->pc != 0x153FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FBCu; }
        if (ctx->pc != 0x153FBCu) { return; }
    }
    ctx->pc = 0x153FBCu;
label_153fbc:
    // 0x153fbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x153FBCu;
    {
        const bool branch_taken_0x153fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fbc) {
            ctx->pc = 0x153FE8u;
            goto label_153fe8;
        }
    }
    ctx->pc = 0x153FC4u;
label_153fc4:
    // 0x153fc4: 0x8e221b24  lw          $v0, 0x1B24($s1)
    ctx->pc = 0x153fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6948)));
    // 0x153fc8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153FC8u;
    {
        const bool branch_taken_0x153fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153FC8u;
            // 0x153fcc: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153fc8) {
            ctx->pc = 0x153FDCu;
            goto label_153fdc;
        }
    }
    ctx->pc = 0x153FD0u;
    // 0x153fd0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x153FD0u;
    {
        const bool branch_taken_0x153fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fd0) {
            ctx->pc = 0x153FDCu;
            goto label_153fdc;
        }
    }
    ctx->pc = 0x153FD8u;
    // 0x153fd8: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_153fdc:
    // 0x153fdc: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x153fe0: 0xc063818  jal         func_18E060
    ctx->pc = 0x153FE0u;
    SET_GPR_U32(ctx, 31, 0x153FE8u);
    ctx->pc = 0x153FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153FE0u;
            // 0x153fe4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FE8u; }
        if (ctx->pc != 0x153FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FE8u; }
        if (ctx->pc != 0x153FE8u) { return; }
    }
    ctx->pc = 0x153FE8u;
label_153fe8:
    // 0x153fe8: 0x8e221b24  lw          $v0, 0x1B24($s1)
    ctx->pc = 0x153fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6948)));
label_153fec:
    // 0x153fec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x153ff0: 0xae221b24  sw          $v0, 0x1B24($s1)
    ctx->pc = 0x153ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6948), GPR_U32(ctx, 2));
label_153ff4:
    // 0x153ff4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x153ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_153ff8:
    // 0x153ff8: 0x3402ff02  ori         $v0, $zero, 0xFF02
    ctx->pc = 0x153ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
    // 0x153ffc: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x154000: 0x946301e0  lhu         $v1, 0x1E0($v1)
    ctx->pc = 0x154000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x154004: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x154004u;
    {
        const bool branch_taken_0x154004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154004u;
            // 0x154008: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154004) {
            ctx->pc = 0x1540A4u;
            goto label_1540a4;
        }
    }
    ctx->pc = 0x15400Cu;
    // 0x15400c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15400Cu;
    {
        const bool branch_taken_0x15400c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15400Cu;
            // 0x154010: 0x3402ff03  ori         $v0, $zero, 0xFF03 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15400c) {
            ctx->pc = 0x154088u;
            goto label_154088;
        }
    }
    ctx->pc = 0x154014u;
    // 0x154014: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x154014u;
    {
        const bool branch_taken_0x154014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154014u;
            // 0x154018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154014) {
            ctx->pc = 0x15404Cu;
            goto label_15404c;
        }
    }
    ctx->pc = 0x15401Cu;
    // 0x15401c: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x15401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x154020: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154020u;
    {
        const bool branch_taken_0x154020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154020) {
            ctx->pc = 0x154030u;
            goto label_154030;
        }
    }
    ctx->pc = 0x154028u;
    // 0x154028: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x154028u;
    {
        const bool branch_taken_0x154028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154028u;
            // 0x15402c: 0x3402f900  ori         $v0, $zero, 0xF900 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154028) {
            ctx->pc = 0x1540C0u;
            goto label_1540c0;
        }
    }
    ctx->pc = 0x154030u;
label_154030:
    // 0x154030: 0xc62101d0  lwc1        $f1, 0x1D0($s1)
    ctx->pc = 0x154030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15403c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15403cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154040: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x154040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x154044: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x154044u;
    {
        const bool branch_taken_0x154044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154044u;
            // 0x154048: 0xe62001d0  swc1        $f0, 0x1D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154044) {
            ctx->pc = 0x15413Cu;
            goto label_15413c;
        }
    }
    ctx->pc = 0x15404Cu;
label_15404c:
    // 0x15404c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154050: 0xc054808  jal         func_152020
    ctx->pc = 0x154050u;
    SET_GPR_U32(ctx, 31, 0x154058u);
    ctx->pc = 0x154054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154050u;
            // 0x154054: 0xae2201c0  sw          $v0, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152020u;
    if (runtime->hasFunction(0x152020u)) {
        auto targetFn = runtime->lookupFunction(0x152020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154058u; }
        if (ctx->pc != 0x154058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPageAutoFlg__6ClsMesFv_0x152020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154058u; }
        if (ctx->pc != 0x154058u) { return; }
    }
    ctx->pc = 0x154058u;
label_154058:
    // 0x154058: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154058u;
    {
        const bool branch_taken_0x154058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154058u;
            // 0x15405c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154058) {
            ctx->pc = 0x154080u;
            goto label_154080;
        }
    }
    ctx->pc = 0x154060u;
    // 0x154060: 0x8e2317dc  lw          $v1, 0x17DC($s1)
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6108)));
    // 0x154064: 0x8e2217e0  lw          $v0, 0x17E0($s1)
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6112)));
    // 0x154068: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x154068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15406c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15406Cu;
    {
        const bool branch_taken_0x15406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15406Cu;
            // 0x154070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15406c) {
            ctx->pc = 0x15407Cu;
            goto label_15407c;
        }
    }
    ctx->pc = 0x154074u;
    // 0x154074: 0xc054fb0  jal         func_153EC0
    ctx->pc = 0x154074u;
    SET_GPR_U32(ctx, 31, 0x15407Cu);
    ctx->pc = 0x153EC0u;
    if (runtime->hasFunction(0x153EC0u)) {
        auto targetFn = runtime->lookupFunction(0x153EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15407Cu; }
        if (ctx->pc != 0x15407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GoNextPage__6ClsMesFv_0x153ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15407Cu; }
        if (ctx->pc != 0x15407Cu) { return; }
    }
    ctx->pc = 0x15407Cu;
label_15407c:
    // 0x15407c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154080:
    // 0x154080: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x154080u;
    {
        const bool branch_taken_0x154080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154080u;
            // 0x154084: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154080) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x154088u;
label_154088:
    // 0x154088: 0xc62101d0  lwc1        $f1, 0x1D0($s1)
    ctx->pc = 0x154088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15408c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x154098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15409c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15409Cu;
    {
        const bool branch_taken_0x15409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15409Cu;
            // 0x1540a0: 0xe62001d0  swc1        $f0, 0x1D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15409c) {
            ctx->pc = 0x15413Cu;
            goto label_15413c;
        }
    }
    ctx->pc = 0x1540A4u;
label_1540a4:
    // 0x1540a4: 0xc62101d0  lwc1        $f1, 0x1D0($s1)
    ctx->pc = 0x1540a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1540a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1540a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1540ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1540acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1540b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1540b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1540b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1540b8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1540B8u;
    {
        const bool branch_taken_0x1540b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540B8u;
            // 0x1540bc: 0xe62001d0  swc1        $f0, 0x1D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540b8) {
            ctx->pc = 0x15413Cu;
            goto label_15413c;
        }
    }
    ctx->pc = 0x1540C0u;
label_1540c0:
    // 0x1540c0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1540c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1540c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1540C4u;
    {
        const bool branch_taken_0x1540c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1540C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540C4u;
            // 0x1540c8: 0x3402f800  ori         $v0, $zero, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540c4) {
            ctx->pc = 0x1540DCu;
            goto label_1540dc;
        }
    }
    ctx->pc = 0x1540CCu;
    // 0x1540cc: 0x3401fa00  ori         $at, $zero, 0xFA00
    ctx->pc = 0x1540ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
    // 0x1540d0: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1540d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1540d4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1540D4u;
    {
        const bool branch_taken_0x1540d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1540d4) {
            ctx->pc = 0x154110u;
            goto label_154110;
        }
    }
    ctx->pc = 0x1540DCu;
label_1540dc:
    // 0x1540dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1540dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1540e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1540E0u;
    {
        const bool branch_taken_0x1540e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1540E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540E0u;
            // 0x1540e4: 0x3402f700  ori         $v0, $zero, 0xF700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540e0) {
            ctx->pc = 0x1540F8u;
            goto label_1540f8;
        }
    }
    ctx->pc = 0x1540E8u;
    // 0x1540e8: 0x3401f900  ori         $at, $zero, 0xF900
    ctx->pc = 0x1540e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x1540ec: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1540ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1540f0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1540F0u;
    {
        const bool branch_taken_0x1540f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1540f0) {
            ctx->pc = 0x154110u;
            goto label_154110;
        }
    }
    ctx->pc = 0x1540F8u;
label_1540f8:
    // 0x1540f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1540f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1540fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1540FCu;
    {
        const bool branch_taken_0x1540fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540FCu;
            // 0x154100: 0x3401f800  ori         $at, $zero, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540fc) {
            ctx->pc = 0x15412Cu;
            goto label_15412c;
        }
    }
    ctx->pc = 0x154104u;
    // 0x154104: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x154104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x154108: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x154108u;
    {
        const bool branch_taken_0x154108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154108u;
            // 0x15410c: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154108) {
            ctx->pc = 0x154130u;
            goto label_154130;
        }
    }
    ctx->pc = 0x154110u;
label_154110:
    // 0x154110: 0xc62101d0  lwc1        $f1, 0x1D0($s1)
    ctx->pc = 0x154110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154114: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15411c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15411cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x154120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x154124: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154124u;
    {
        const bool branch_taken_0x154124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154124u;
            // 0x154128: 0xe62001d0  swc1        $f0, 0x1D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154124) {
            ctx->pc = 0x15413Cu;
            goto label_15413c;
        }
    }
    ctx->pc = 0x15412Cu;
label_15412c:
    // 0x15412c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_154130:
    // 0x154130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154134: 0x906301ec  lbu         $v1, 0x1EC($v1)
    ctx->pc = 0x154134u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x154138: 0xae2317d8  sw          $v1, 0x17D8($s1)
    ctx->pc = 0x154138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6104), GPR_U32(ctx, 3));
label_15413c:
    // 0x15413c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15413cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154140:
    // 0x154140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154148: 0x3e00008  jr          $ra
    ctx->pc = 0x154148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154148u;
            // 0x15414c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154150u;
}
