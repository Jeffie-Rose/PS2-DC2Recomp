#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMarkCursor__13CNameRegiMenuFv
// Address: 0x30dda0 - 0x30e09c
void StepMarkCursor__13CNameRegiMenuFv_0x30dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMarkCursor__13CNameRegiMenuFv_0x30dda0");
#endif

    switch (ctx->pc) {
        case 0x30dea8u: goto label_30dea8;
        case 0x30e044u: goto label_30e044;
        case 0x30e060u: goto label_30e060;
        default: break;
    }

    ctx->pc = 0x30dda0u;

    // 0x30dda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30dda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dda8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30ddac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30ddb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30ddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30ddb4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30ddb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30ddb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ddb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ddbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30ddbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30ddc0: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x30ddc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30ddc4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x30ddc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x30ddc8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30DDC8u;
    {
        const bool branch_taken_0x30ddc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DDC8u;
            // 0x30ddcc: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddc8) {
            ctx->pc = 0x30DEA0u;
            goto label_30dea0;
        }
    }
    ctx->pc = 0x30DDD0u;
    // 0x30ddd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DDD0u;
    {
        const bool branch_taken_0x30ddd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ddd0) {
            ctx->pc = 0x30DDE0u;
            goto label_30dde0;
        }
    }
    ctx->pc = 0x30DDD8u;
    // 0x30ddd8: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x30DDD8u;
    {
        const bool branch_taken_0x30ddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DDD8u;
            // 0x30dddc: 0x92050130  lbu         $a1, 0x130($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddd8) {
            ctx->pc = 0x30E02Cu;
            goto label_30e02c;
        }
    }
    ctx->pc = 0x30DDE0u;
label_30dde0:
    // 0x30dde0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x30dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30dde4: 0x8e07011c  lw          $a3, 0x11C($s0)
    ctx->pc = 0x30dde4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30dde8: 0x8f848ad0  lw          $a0, -0x7530($gp)
    ctx->pc = 0x30dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30ddec: 0x2442fef6  addiu       $v0, $v0, -0x10A
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967030));
    // 0x30ddf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ddf4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x30ddf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ddf8: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30DDF8u;
    {
        const bool branch_taken_0x30ddf8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x30DDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DDF8u;
            // 0x30ddfc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddf8) {
            ctx->pc = 0x30DE1Cu;
            goto label_30de1c;
        }
    }
    ctx->pc = 0x30DE00u;
    // 0x30de00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30de04: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30DE04u;
    {
        const bool branch_taken_0x30de04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DE04u;
            // 0x30de08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de04) {
            ctx->pc = 0x30DE10u;
            goto label_30de10;
        }
    }
    ctx->pc = 0x30DE0Cu;
    // 0x30de0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30de0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30de10:
    // 0x30de10: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DE10u;
    {
        const bool branch_taken_0x30de10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DE10u;
            // 0x30de14: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de10) {
            ctx->pc = 0x30DE20u;
            goto label_30de20;
        }
    }
    ctx->pc = 0x30DE18u;
    // 0x30de18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30de1c:
    // 0x30de1c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x30de1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30de20:
    // 0x30de20: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x30de20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30de24: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x30de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30de28: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x30de28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x30de2c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30de30: 0x3c044190  lui         $a0, 0x4190
    ctx->pc = 0x30de30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16784 << 16));
    // 0x30de34: 0x2442e4d0  addiu       $v0, $v0, -0x1B30
    ctx->pc = 0x30de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960336));
    // 0x30de38: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x30de38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30de3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30de40: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x30de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x30de44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30de48: 0x2442e4d2  addiu       $v0, $v0, -0x1B2E
    ctx->pc = 0x30de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960338));
    // 0x30de4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30de50: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x30de50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30de54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x30de54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30de58: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x30de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x30de5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x30de5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30de60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30de60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30de64: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x30de64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30de68: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x30de6c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x30de6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30de70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30de70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30de74: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x30de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30de78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30de78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30de7c: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x30de7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30de80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30de80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30de84: 0x0  nop
    ctx->pc = 0x30de84u;
    // NOP
    // 0x30de88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30de88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30de8c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x30de8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30de90: 0x14e20065  bne         $a3, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x30DE90u;
    {
        const bool branch_taken_0x30de90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DE90u;
            // 0x30de94: 0x46002500  add.s       $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de90) {
            ctx->pc = 0x30E028u;
            goto label_30e028;
        }
    }
    ctx->pc = 0x30DE98u;
    // 0x30de98: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x30DE98u;
    {
        const bool branch_taken_0x30de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DE98u;
            // 0x30de9c: 0x4604a500  add.s       $f20, $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de98) {
            ctx->pc = 0x30E028u;
            goto label_30e028;
        }
    }
    ctx->pc = 0x30DEA0u;
label_30dea0:
    // 0x30dea0: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30DEA0u;
    SET_GPR_U32(ctx, 31, 0x30DEA8u);
    ctx->pc = 0x30DEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DEA0u;
            // 0x30dea4: 0x26110114  addiu       $s1, $s0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DEA8u; }
        if (ctx->pc != 0x30DEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DEA8u; }
        if (ctx->pc != 0x30DEA8u) { return; }
    }
    ctx->pc = 0x30DEA8u;
label_30dea8:
    // 0x30dea8: 0x27838600  addiu       $v1, $gp, -0x7A00
    ctx->pc = 0x30dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936064));
    // 0x30deac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30deacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30deb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30deb4: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x30deb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30deb8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30DEB8u;
    {
        const bool branch_taken_0x30deb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DEB8u;
            // 0x30debc: 0xa4001a  div         $zero, $a1, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30deb8) {
            ctx->pc = 0x30DEC4u;
            goto label_30dec4;
        }
    }
    ctx->pc = 0x30DEC0u;
    // 0x30dec0: 0x1cd  break       0, 7
    ctx->pc = 0x30dec0u;
    runtime->handleBreak(rdram, ctx);
label_30dec4:
    // 0x30dec4: 0x1810  mfhi        $v1
    ctx->pc = 0x30dec4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x30dec8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30DEC8u;
    {
        const bool branch_taken_0x30dec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DEC8u;
            // 0x30decc: 0xa4001a  div         $zero, $a1, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dec8) {
            ctx->pc = 0x30DED4u;
            goto label_30ded4;
        }
    }
    ctx->pc = 0x30DED0u;
    // 0x30ded0: 0x1cd  break       0, 7
    ctx->pc = 0x30ded0u;
    runtime->handleBreak(rdram, ctx);
label_30ded4:
    // 0x30ded4: 0x2012  mflo        $a0
    ctx->pc = 0x30ded4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x30ded8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dedc: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DEDCu;
    {
        const bool branch_taken_0x30dedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x30DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DEDCu;
            // 0x30dee0: 0x3c056666  lui         $a1, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dedc) {
            ctx->pc = 0x30DEF4u;
            goto label_30def4;
        }
    }
    ctx->pc = 0x30DEE4u;
    // 0x30dee4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30dee8: 0x14450018  bne         $v0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DEE8u;
    {
        const bool branch_taken_0x30dee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DEE8u;
            // 0x30deec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dee8) {
            ctx->pc = 0x30DF4Cu;
            goto label_30df4c;
        }
    }
    ctx->pc = 0x30DEF0u;
    // 0x30def0: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x30def0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
label_30def4:
    // 0x30def4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x30def4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30def8: 0x34a56667  ori         $a1, $a1, 0x6667
    ctx->pc = 0x30def8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x30defc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x30defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30df00: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x30df00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30df04: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x30df04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30df08: 0x24a7003e  addiu       $a3, $a1, 0x3E
    ctx->pc = 0x30df08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 62));
    // 0x30df0c: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x30df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30df10: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x30df10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30df14: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x30df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30df18: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x30df18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30df1c: 0x24a500f4  addiu       $a1, $a1, 0xF4
    ctx->pc = 0x30df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
    // 0x30df20: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30df20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30df24: 0x2810  mfhi        $a1
    ctx->pc = 0x30df24u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x30df28: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x30df28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x30df2c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x30df2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x30df30: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30df30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30df34: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30df34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30df38: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x30df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x30df3c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30df3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30df40: 0x0  nop
    ctx->pc = 0x30df40u;
    // NOP
    // 0x30df44: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x30df44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x30df48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30df4c:
    // 0x30df4c: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x30DF4Cu;
    {
        const bool branch_taken_0x30df4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF4Cu;
            // 0x30df50: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df4c) {
            ctx->pc = 0x30DF8Cu;
            goto label_30df8c;
        }
    }
    ctx->pc = 0x30DF54u;
    // 0x30df54: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x30df54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30df58: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x30df58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30df5c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x30df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30df60: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x30df60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30df64: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x30df64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30df68: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x30df68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30df6c: 0x24a500f4  addiu       $a1, $a1, 0xF4
    ctx->pc = 0x30df6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
    // 0x30df70: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x30df70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30df74: 0x24c60034  addiu       $a2, $a2, 0x34
    ctx->pc = 0x30df74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
    // 0x30df78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x30df78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30df7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30df7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30df80: 0x0  nop
    ctx->pc = 0x30df80u;
    // NOP
    // 0x30df84: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x30df84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x30df88: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x30df88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_30df8c:
    // 0x30df8c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30DF8Cu;
    {
        const bool branch_taken_0x30df8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF8Cu;
            // 0x30df90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df8c) {
            ctx->pc = 0x30DFCCu;
            goto label_30dfcc;
        }
    }
    ctx->pc = 0x30DF94u;
    // 0x30df94: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x30df94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30df98: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x30df98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30df9c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x30df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30dfa0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x30dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30dfa4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x30dfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30dfa8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x30dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30dfac: 0x24c60064  addiu       $a2, $a2, 0x64
    ctx->pc = 0x30dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x30dfb0: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x30dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x30dfb4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x30dfb4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30dfb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30dfb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30dfbc: 0x0  nop
    ctx->pc = 0x30dfbcu;
    // NOP
    // 0x30dfc0: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x30dfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x30dfc4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x30dfc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x30dfc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30dfcc:
    // 0x30dfcc: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x30DFCCu;
    {
        const bool branch_taken_0x30dfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFCCu;
            // 0x30dfd0: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfcc) {
            ctx->pc = 0x30E004u;
            goto label_30e004;
        }
    }
    ctx->pc = 0x30DFD4u;
    // 0x30dfd4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x30dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30dfd8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30dfdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30dfe0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30dfe4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30dfe8: 0x24630052  addiu       $v1, $v1, 0x52
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 82));
    // 0x30dfec: 0x244200f4  addiu       $v0, $v0, 0xF4
    ctx->pc = 0x30dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x30dff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30dff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30dff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30dff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30dff8: 0x0  nop
    ctx->pc = 0x30dff8u;
    // NOP
    // 0x30dffc: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x30dffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x30e000: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x30e000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_30e004:
    // 0x30e004: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x30e008: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x30e008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x30e00c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30e00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e014: 0x0  nop
    ctx->pc = 0x30e014u;
    // NOP
    // 0x30e018: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x30e018u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x30e01c: 0xe6150178  swc1        $f21, 0x178($s0)
    ctx->pc = 0x30e01cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x30e020: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x30e020u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x30e024: 0xe614017c  swc1        $f20, 0x17C($s0)
    ctx->pc = 0x30e024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
label_30e028:
    // 0x30e028: 0x92050130  lbu         $a1, 0x130($s0)
    ctx->pc = 0x30e028u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
label_30e02c:
    // 0x30e02c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x30e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x30e030: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e034: 0x26040134  addiu       $a0, $s0, 0x134
    ctx->pc = 0x30e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
    // 0x30e038: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30e038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e03c: 0xc094514  jal         func_251450
    ctx->pc = 0x30E03Cu;
    SET_GPR_U32(ctx, 31, 0x30E044u);
    ctx->pc = 0x30E040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E03Cu;
            // 0x30e040: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E044u; }
        if (ctx->pc != 0x30E044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E044u; }
        if (ctx->pc != 0x30E044u) { return; }
    }
    ctx->pc = 0x30E044u;
label_30e044:
    // 0x30e044: 0x92050130  lbu         $a1, 0x130($s0)
    ctx->pc = 0x30e044u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x30e048: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x30e048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x30e04c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e050: 0x26040138  addiu       $a0, $s0, 0x138
    ctx->pc = 0x30e050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x30e054: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30e054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e058: 0xc094514  jal         func_251450
    ctx->pc = 0x30E058u;
    SET_GPR_U32(ctx, 31, 0x30E060u);
    ctx->pc = 0x30E05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E058u;
            // 0x30e05c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E060u; }
        if (ctx->pc != 0x30E060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E060u; }
        if (ctx->pc != 0x30E060u) { return; }
    }
    ctx->pc = 0x30E060u;
label_30e060:
    // 0x30e060: 0xa2000130  sb          $zero, 0x130($s0)
    ctx->pc = 0x30e060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e064: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30e064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e068: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x30e068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30e06c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E06Cu;
    {
        const bool branch_taken_0x30e06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e06c) {
            ctx->pc = 0x30E080u;
            goto label_30e080;
        }
    }
    ctx->pc = 0x30E074u;
    // 0x30e074: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x30e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x30e078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e07c: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x30e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
label_30e080:
    // 0x30e080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e084: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30e088: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30e088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e08c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30e090: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30e090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e094: 0x3e00008  jr          $ra
    ctx->pc = 0x30E094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E094u;
            // 0x30e098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E09Cu;
}
